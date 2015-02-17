####################################
# Jazz AOT on the boot jars
####################################

DEX2JEX := $(HOST_OUT_EXECUTABLES)/dex2jex$(HOST_EXECUTABLE_SUFFIX)

# This file must be included after dex_preopt.mk

export ANDROID_PRODUCT_OUT := $(PRODUCT_OUT)

JAZZAOT_BOOT_JARS_MODULES := $(DEXPREOPT_BOOT_JARS_MODULES)

JAZZAOT_PRODUCT_DIR := $(DEXPREOPT_BUILD_DIR)/$(DEXPREOPT_PRODUCT_DIR)

# Generate jex files for boot under the same directory as their odex files
JAZZAOT_BOOT_JEX_DIR_FULL_PATH := $(DEXPREOPT_BOOT_JAR_DIR_FULL_PATH)

JAZZAOT_BOOT_JEXS := $(foreach b,$(JAZZAOT_BOOT_JARS_MODULES),\
    $(JAZZAOT_BOOT_JEX_DIR_FULL_PATH)/$(b).jar.jex)

define _jazzaot-construct-bootclasspath
$(call normalize-path-list,
    $(addprefix $(JAZZAOT_PRODUCT_DIR)/./$(DEXPREOPT_BOOT_JAR_DIR)/, \
        $(addsuffix .jar, $(JAZZAOT_BOOT_JARS_MODULES))))
endef

# Generate Thumb-2 instruction set for Jazz AOT
define _jazzaot-select-instruction-set
$(strip $(if $(filter arm,$(TARGET_ARCH)),thumb2,$(TARGET_ARCH)))
endef

# Get dependencies to generate target Jex files. jazzaot-one-file requires
# these targets to be fulfilled before calling.
define get-jazzaot-dependencies
$(strip $(foreach lib,libdvm libcompiler_rt libc libm,
    $(TARGET_OUT_SHARED_LIBRARIES)/$(lib)$(TARGET_SHLIB_SUFFIX))) \
$(TARGET_OUT_SHARED_LIBRARIES)/crtbegin_so.o \
$(TARGET_OUT_SHARED_LIBRARIES)/crtend_so.o
endef

# $(1): the input .odex or .jar or .apk file
# $(2): the output .jex file
define jazzaot-one-file
$(hide) $(DEX2JEX) -j1 \
	--bootclasspath=$(call _jazzaot-construct-bootclasspath) \
	--dex-file=$(1) --jex-file=$(2) \
  --instruction-set=$(call _jazzaot-select-instruction-set)
endef

# $(1): boot jar module name
define _jazzaot-boot-jar
$(eval _jbj_jex := $(JAZZAOT_BOOT_JEX_DIR_FULL_PATH)/$(1).jar.jex)
$(eval _dbj_jar := $(DEXPREOPT_BOOT_JAR_DIR_FULL_PATH)/$(1).jar)
$(eval _dbj_odex := $(DEXPREOPT_BOOT_JAR_DIR_FULL_PATH)/$(1).odex)
$(_jbj_jex) : $(_dbj_odex) | $(ACP) $(DEX2JEX) $(call get-jazzaot-dependencies)
	@echo "Jazz AOT Boot Jar: $$@"
	$(hide) rm -f $$@
	$(hide) mkdir -p $$(dir $$@)
	$(hide) chmod u+x $(DEX2JEX)
	$$(call jazzaot-one-file,$(_dbj_jar),$$@)

$(eval _jbj_jex :=)
$(eval _dbj_jar :=)
$(eval _dbj_odex :=)
endef

$(foreach b,$(JAZZAOT_BOOT_JARS_MODULES),$(eval $(call _jazzaot-boot-jar,$(b))))
