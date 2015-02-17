/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _BCM1480_INT_H
#define _BCM1480_INT_H
#include "sb1250_defs.h"
#define K_BCM1480_INT_SOURCES 128
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _BCM1480_INT_HIGH(k) (k)
#define _BCM1480_INT_LOW(k) ((k)+64)
#define K_BCM1480_INT_ADDR_TRAP _BCM1480_INT_HIGH(1)
#define K_BCM1480_INT_GPIO_0 _BCM1480_INT_HIGH(4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_GPIO_1 _BCM1480_INT_HIGH(5)
#define K_BCM1480_INT_GPIO_2 _BCM1480_INT_HIGH(6)
#define K_BCM1480_INT_GPIO_3 _BCM1480_INT_HIGH(7)
#define K_BCM1480_INT_PCI_INTA _BCM1480_INT_HIGH(8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_PCI_INTB _BCM1480_INT_HIGH(9)
#define K_BCM1480_INT_PCI_INTC _BCM1480_INT_HIGH(10)
#define K_BCM1480_INT_PCI_INTD _BCM1480_INT_HIGH(11)
#define K_BCM1480_INT_CYCLE_CP0 _BCM1480_INT_HIGH(12)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_CYCLE_CP1 _BCM1480_INT_HIGH(13)
#define K_BCM1480_INT_CYCLE_CP2 _BCM1480_INT_HIGH(14)
#define K_BCM1480_INT_CYCLE_CP3 _BCM1480_INT_HIGH(15)
#define K_BCM1480_INT_TIMER_0 _BCM1480_INT_HIGH(20)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_TIMER_1 _BCM1480_INT_HIGH(21)
#define K_BCM1480_INT_TIMER_2 _BCM1480_INT_HIGH(22)
#define K_BCM1480_INT_TIMER_3 _BCM1480_INT_HIGH(23)
#define K_BCM1480_INT_DM_CH_0 _BCM1480_INT_HIGH(28)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_DM_CH_1 _BCM1480_INT_HIGH(29)
#define K_BCM1480_INT_DM_CH_2 _BCM1480_INT_HIGH(30)
#define K_BCM1480_INT_DM_CH_3 _BCM1480_INT_HIGH(31)
#define K_BCM1480_INT_MAC_0 _BCM1480_INT_HIGH(36)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_MAC_0_CH1 _BCM1480_INT_HIGH(37)
#define K_BCM1480_INT_MAC_1 _BCM1480_INT_HIGH(38)
#define K_BCM1480_INT_MAC_1_CH1 _BCM1480_INT_HIGH(39)
#define K_BCM1480_INT_MAC_2 _BCM1480_INT_HIGH(40)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_MAC_2_CH1 _BCM1480_INT_HIGH(41)
#define K_BCM1480_INT_MAC_3 _BCM1480_INT_HIGH(42)
#define K_BCM1480_INT_MAC_3_CH1 _BCM1480_INT_HIGH(43)
#define K_BCM1480_INT_PMI_LOW _BCM1480_INT_HIGH(52)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_PMI_HIGH _BCM1480_INT_HIGH(53)
#define K_BCM1480_INT_PMO_LOW _BCM1480_INT_HIGH(54)
#define K_BCM1480_INT_PMO_HIGH _BCM1480_INT_HIGH(55)
#define K_BCM1480_INT_MBOX_0_0 _BCM1480_INT_HIGH(56)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_MBOX_0_1 _BCM1480_INT_HIGH(57)
#define K_BCM1480_INT_MBOX_0_2 _BCM1480_INT_HIGH(58)
#define K_BCM1480_INT_MBOX_0_3 _BCM1480_INT_HIGH(59)
#define K_BCM1480_INT_MBOX_1_0 _BCM1480_INT_HIGH(60)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_MBOX_1_1 _BCM1480_INT_HIGH(61)
#define K_BCM1480_INT_MBOX_1_2 _BCM1480_INT_HIGH(62)
#define K_BCM1480_INT_MBOX_1_3 _BCM1480_INT_HIGH(63)
#define K_BCM1480_INT_BAD_ECC _BCM1480_INT_LOW(1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_COR_ECC _BCM1480_INT_LOW(2)
#define K_BCM1480_INT_IO_BUS _BCM1480_INT_LOW(3)
#define K_BCM1480_INT_PERF_CNT _BCM1480_INT_LOW(4)
#define K_BCM1480_INT_SW_PERF_CNT _BCM1480_INT_LOW(5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_TRACE_FREEZE _BCM1480_INT_LOW(6)
#define K_BCM1480_INT_SW_TRACE_FREEZE _BCM1480_INT_LOW(7)
#define K_BCM1480_INT_WATCHDOG_TIMER_0 _BCM1480_INT_LOW(8)
#define K_BCM1480_INT_WATCHDOG_TIMER_1 _BCM1480_INT_LOW(9)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_WATCHDOG_TIMER_2 _BCM1480_INT_LOW(10)
#define K_BCM1480_INT_WATCHDOG_TIMER_3 _BCM1480_INT_LOW(11)
#define K_BCM1480_INT_PCI_ERROR _BCM1480_INT_LOW(16)
#define K_BCM1480_INT_PCI_RESET _BCM1480_INT_LOW(17)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_NODE_CONTROLLER _BCM1480_INT_LOW(18)
#define K_BCM1480_INT_HOST_BRIDGE _BCM1480_INT_LOW(19)
#define K_BCM1480_INT_PORT_0_FATAL _BCM1480_INT_LOW(20)
#define K_BCM1480_INT_PORT_0_NONFATAL _BCM1480_INT_LOW(21)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_PORT_1_FATAL _BCM1480_INT_LOW(22)
#define K_BCM1480_INT_PORT_1_NONFATAL _BCM1480_INT_LOW(23)
#define K_BCM1480_INT_PORT_2_FATAL _BCM1480_INT_LOW(24)
#define K_BCM1480_INT_PORT_2_NONFATAL _BCM1480_INT_LOW(25)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_LDT_SMI _BCM1480_INT_LOW(32)
#define K_BCM1480_INT_LDT_NMI _BCM1480_INT_LOW(33)
#define K_BCM1480_INT_LDT_INIT _BCM1480_INT_LOW(34)
#define K_BCM1480_INT_LDT_STARTUP _BCM1480_INT_LOW(35)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_LDT_EXT _BCM1480_INT_LOW(36)
#define K_BCM1480_INT_SMB_0 _BCM1480_INT_LOW(40)
#define K_BCM1480_INT_SMB_1 _BCM1480_INT_LOW(41)
#define K_BCM1480_INT_PCMCIA _BCM1480_INT_LOW(42)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_UART_0 _BCM1480_INT_LOW(44)
#define K_BCM1480_INT_UART_1 _BCM1480_INT_LOW(45)
#define K_BCM1480_INT_UART_2 _BCM1480_INT_LOW(46)
#define K_BCM1480_INT_UART_3 _BCM1480_INT_LOW(47)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_GPIO_4 _BCM1480_INT_LOW(52)
#define K_BCM1480_INT_GPIO_5 _BCM1480_INT_LOW(53)
#define K_BCM1480_INT_GPIO_6 _BCM1480_INT_LOW(54)
#define K_BCM1480_INT_GPIO_7 _BCM1480_INT_LOW(55)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_GPIO_8 _BCM1480_INT_LOW(56)
#define K_BCM1480_INT_GPIO_9 _BCM1480_INT_LOW(57)
#define K_BCM1480_INT_GPIO_10 _BCM1480_INT_LOW(58)
#define K_BCM1480_INT_GPIO_11 _BCM1480_INT_LOW(59)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_GPIO_12 _BCM1480_INT_LOW(60)
#define K_BCM1480_INT_GPIO_13 _BCM1480_INT_LOW(61)
#define K_BCM1480_INT_GPIO_14 _BCM1480_INT_LOW(62)
#define K_BCM1480_INT_GPIO_15 _BCM1480_INT_LOW(63)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _BCM1480_INT_MASK(w, n) _SB_MAKEMASK(w, ((n) & 0x3F))
#define _BCM1480_INT_MASK1(n) _SB_MAKEMASK1(((n) & 0x3F))
#define _BCM1480_INT_OFFSET(n) (((n) & 0x40) << 6)
#define M_BCM1480_INT_CASCADE _BCM1480_INT_MASK1(_BCM1480_INT_HIGH(0))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_ADDR_TRAP _BCM1480_INT_MASK1(K_BCM1480_INT_ADDR_TRAP)
#define M_BCM1480_INT_GPIO_0 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_0)
#define M_BCM1480_INT_GPIO_1 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_1)
#define M_BCM1480_INT_GPIO_2 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_GPIO_3 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_3)
#define M_BCM1480_INT_PCI_INTA _BCM1480_INT_MASK1(K_BCM1480_INT_PCI_INTA)
#define M_BCM1480_INT_PCI_INTB _BCM1480_INT_MASK1(K_BCM1480_INT_PCI_INTB)
#define M_BCM1480_INT_PCI_INTC _BCM1480_INT_MASK1(K_BCM1480_INT_PCI_INTC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_PCI_INTD _BCM1480_INT_MASK1(K_BCM1480_INT_PCI_INTD)
#define M_BCM1480_INT_CYCLE_CP0 _BCM1480_INT_MASK1(K_BCM1480_INT_CYCLE_CP0)
#define M_BCM1480_INT_CYCLE_CP1 _BCM1480_INT_MASK1(K_BCM1480_INT_CYCLE_CP1)
#define M_BCM1480_INT_CYCLE_CP2 _BCM1480_INT_MASK1(K_BCM1480_INT_CYCLE_CP2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_CYCLE_CP3 _BCM1480_INT_MASK1(K_BCM1480_INT_CYCLE_CP3)
#define M_BCM1480_INT_TIMER_0 _BCM1480_INT_MASK1(K_BCM1480_INT_TIMER_0)
#define M_BCM1480_INT_TIMER_1 _BCM1480_INT_MASK1(K_BCM1480_INT_TIMER_1)
#define M_BCM1480_INT_TIMER_2 _BCM1480_INT_MASK1(K_BCM1480_INT_TIMER_2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_TIMER_3 _BCM1480_INT_MASK1(K_BCM1480_INT_TIMER_3)
#define M_BCM1480_INT_DM_CH_0 _BCM1480_INT_MASK1(K_BCM1480_INT_DM_CH_0)
#define M_BCM1480_INT_DM_CH_1 _BCM1480_INT_MASK1(K_BCM1480_INT_DM_CH_1)
#define M_BCM1480_INT_DM_CH_2 _BCM1480_INT_MASK1(K_BCM1480_INT_DM_CH_2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_DM_CH_3 _BCM1480_INT_MASK1(K_BCM1480_INT_DM_CH_3)
#define M_BCM1480_INT_MAC_0 _BCM1480_INT_MASK1(K_BCM1480_INT_MAC_0)
#define M_BCM1480_INT_MAC_0_CH1 _BCM1480_INT_MASK1(K_BCM1480_INT_MAC_0_CH1)
#define M_BCM1480_INT_MAC_1 _BCM1480_INT_MASK1(K_BCM1480_INT_MAC_1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_MAC_1_CH1 _BCM1480_INT_MASK1(K_BCM1480_INT_MAC_1_CH1)
#define M_BCM1480_INT_MAC_2 _BCM1480_INT_MASK1(K_BCM1480_INT_MAC_2)
#define M_BCM1480_INT_MAC_2_CH1 _BCM1480_INT_MASK1(K_BCM1480_INT_MAC_2_CH1)
#define M_BCM1480_INT_MAC_3 _BCM1480_INT_MASK1(K_BCM1480_INT_MAC_3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_MAC_3_CH1 _BCM1480_INT_MASK1(K_BCM1480_INT_MAC_3_CH1)
#define M_BCM1480_INT_PMI_LOW _BCM1480_INT_MASK1(K_BCM1480_INT_PMI_LOW)
#define M_BCM1480_INT_PMI_HIGH _BCM1480_INT_MASK1(K_BCM1480_INT_PMI_HIGH)
#define M_BCM1480_INT_PMO_LOW _BCM1480_INT_MASK1(K_BCM1480_INT_PMO_LOW)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_PMO_HIGH _BCM1480_INT_MASK1(K_BCM1480_INT_PMO_HIGH)
#define M_BCM1480_INT_MBOX_ALL _BCM1480_INT_MASK(8, K_BCM1480_INT_MBOX_0_0)
#define M_BCM1480_INT_MBOX_0_0 _BCM1480_INT_MASK1(K_BCM1480_INT_MBOX_0_0)
#define M_BCM1480_INT_MBOX_0_1 _BCM1480_INT_MASK1(K_BCM1480_INT_MBOX_0_1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_MBOX_0_2 _BCM1480_INT_MASK1(K_BCM1480_INT_MBOX_0_2)
#define M_BCM1480_INT_MBOX_0_3 _BCM1480_INT_MASK1(K_BCM1480_INT_MBOX_0_3)
#define M_BCM1480_INT_MBOX_1_0 _BCM1480_INT_MASK1(K_BCM1480_INT_MBOX_1_0)
#define M_BCM1480_INT_MBOX_1_1 _BCM1480_INT_MASK1(K_BCM1480_INT_MBOX_1_1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_MBOX_1_2 _BCM1480_INT_MASK1(K_BCM1480_INT_MBOX_1_2)
#define M_BCM1480_INT_MBOX_1_3 _BCM1480_INT_MASK1(K_BCM1480_INT_MBOX_1_3)
#define M_BCM1480_INT_BAD_ECC _BCM1480_INT_MASK1(K_BCM1480_INT_BAD_ECC)
#define M_BCM1480_INT_COR_ECC _BCM1480_INT_MASK1(K_BCM1480_INT_COR_ECC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_IO_BUS _BCM1480_INT_MASK1(K_BCM1480_INT_IO_BUS)
#define M_BCM1480_INT_PERF_CNT _BCM1480_INT_MASK1(K_BCM1480_INT_PERF_CNT)
#define M_BCM1480_INT_SW_PERF_CNT _BCM1480_INT_MASK1(K_BCM1480_INT_SW_PERF_CNT)
#define M_BCM1480_INT_TRACE_FREEZE _BCM1480_INT_MASK1(K_BCM1480_INT_TRACE_FREEZE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_SW_TRACE_FREEZE _BCM1480_INT_MASK1(K_BCM1480_INT_SW_TRACE_FREEZE)
#define M_BCM1480_INT_WATCHDOG_TIMER_0 _BCM1480_INT_MASK1(K_BCM1480_INT_WATCHDOG_TIMER_0)
#define M_BCM1480_INT_WATCHDOG_TIMER_1 _BCM1480_INT_MASK1(K_BCM1480_INT_WATCHDOG_TIMER_1)
#define M_BCM1480_INT_WATCHDOG_TIMER_2 _BCM1480_INT_MASK1(K_BCM1480_INT_WATCHDOG_TIMER_2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_WATCHDOG_TIMER_3 _BCM1480_INT_MASK1(K_BCM1480_INT_WATCHDOG_TIMER_3)
#define M_BCM1480_INT_PCI_ERROR _BCM1480_INT_MASK1(K_BCM1480_INT_PCI_ERROR)
#define M_BCM1480_INT_PCI_RESET _BCM1480_INT_MASK1(K_BCM1480_INT_PCI_RESET)
#define M_BCM1480_INT_NODE_CONTROLLER _BCM1480_INT_MASK1(K_BCM1480_INT_NODE_CONTROLLER)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_HOST_BRIDGE _BCM1480_INT_MASK1(K_BCM1480_INT_HOST_BRIDGE)
#define M_BCM1480_INT_PORT_0_FATAL _BCM1480_INT_MASK1(K_BCM1480_INT_PORT_0_FATAL)
#define M_BCM1480_INT_PORT_0_NONFATAL _BCM1480_INT_MASK1(K_BCM1480_INT_PORT_0_NONFATAL)
#define M_BCM1480_INT_PORT_1_FATAL _BCM1480_INT_MASK1(K_BCM1480_INT_PORT_1_FATAL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_PORT_1_NONFATAL _BCM1480_INT_MASK1(K_BCM1480_INT_PORT_1_NONFATAL)
#define M_BCM1480_INT_PORT_2_FATAL _BCM1480_INT_MASK1(K_BCM1480_INT_PORT_2_FATAL)
#define M_BCM1480_INT_PORT_2_NONFATAL _BCM1480_INT_MASK1(K_BCM1480_INT_PORT_2_NONFATAL)
#define M_BCM1480_INT_LDT_SMI _BCM1480_INT_MASK1(K_BCM1480_INT_LDT_SMI)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_LDT_NMI _BCM1480_INT_MASK1(K_BCM1480_INT_LDT_NMI)
#define M_BCM1480_INT_LDT_INIT _BCM1480_INT_MASK1(K_BCM1480_INT_LDT_INIT)
#define M_BCM1480_INT_LDT_STARTUP _BCM1480_INT_MASK1(K_BCM1480_INT_LDT_STARTUP)
#define M_BCM1480_INT_LDT_EXT _BCM1480_INT_MASK1(K_BCM1480_INT_LDT_EXT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_SMB_0 _BCM1480_INT_MASK1(K_BCM1480_INT_SMB_0)
#define M_BCM1480_INT_SMB_1 _BCM1480_INT_MASK1(K_BCM1480_INT_SMB_1)
#define M_BCM1480_INT_PCMCIA _BCM1480_INT_MASK1(K_BCM1480_INT_PCMCIA)
#define M_BCM1480_INT_UART_0 _BCM1480_INT_MASK1(K_BCM1480_INT_UART_0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_UART_1 _BCM1480_INT_MASK1(K_BCM1480_INT_UART_1)
#define M_BCM1480_INT_UART_2 _BCM1480_INT_MASK1(K_BCM1480_INT_UART_2)
#define M_BCM1480_INT_UART_3 _BCM1480_INT_MASK1(K_BCM1480_INT_UART_3)
#define M_BCM1480_INT_GPIO_4 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_GPIO_5 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_5)
#define M_BCM1480_INT_GPIO_6 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_6)
#define M_BCM1480_INT_GPIO_7 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_7)
#define M_BCM1480_INT_GPIO_8 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_GPIO_9 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_9)
#define M_BCM1480_INT_GPIO_10 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_10)
#define M_BCM1480_INT_GPIO_11 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_11)
#define M_BCM1480_INT_GPIO_12 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_12)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_GPIO_13 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_13)
#define M_BCM1480_INT_GPIO_14 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_14)
#define M_BCM1480_INT_GPIO_15 _BCM1480_INT_MASK1(K_BCM1480_INT_GPIO_15)
#define K_BCM1480_INT_MAP_I0 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_MAP_I1 1
#define K_BCM1480_INT_MAP_I2 2
#define K_BCM1480_INT_MAP_I3 3
#define K_BCM1480_INT_MAP_I4 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_MAP_I5 5
#define K_BCM1480_INT_MAP_NMI 6
#define K_BCM1480_INT_MAP_DINT 7
#define S_BCM1480_INT_HT_INTMSG 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_INT_HT_INTMSG _SB_MAKEMASK(3, S_BCM1480_INT_HT_INTMSG)
#define V_BCM1480_INT_HT_INTMSG(x) _SB_MAKEVALUE(x, S_BCM1480_INT_HT_INTMSG)
#define G_BCM1480_INT_HT_INTMSG(x) _SB_GETVALUE(x, S_BCM1480_INT_HT_INTMSG, M_BCM1480_INT_HT_INTMSG)
#define K_BCM1480_INT_HT_INTMSG_FIXED 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_HT_INTMSG_ARBITRATED 1
#define K_BCM1480_INT_HT_INTMSG_SMI 2
#define K_BCM1480_INT_HT_INTMSG_NMI 3
#define K_BCM1480_INT_HT_INTMSG_INIT 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define K_BCM1480_INT_HT_INTMSG_STARTUP 5
#define K_BCM1480_INT_HT_INTMSG_EXTINT 6
#define K_BCM1480_INT_HT_INTMSG_RESERVED 7
#define M_BCM1480_INT_HT_TRIGGERMODE _SB_MAKEMASK1(3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define V_BCM1480_INT_HT_EDGETRIGGER 0
#define V_BCM1480_INT_HT_LEVELTRIGGER M_BCM1480_INT_HT_TRIGGERMODE
#define M_BCM1480_INT_HT_DESTMODE _SB_MAKEMASK1(4)
#define V_BCM1480_INT_HT_PHYSICALDEST 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define V_BCM1480_INT_HT_LOGICALDEST M_BCM1480_INT_HT_DESTMODE
#define S_BCM1480_INT_HT_INTDEST 5
#define M_BCM1480_INT_HT_INTDEST _SB_MAKEMASK(8, S_BCM1480_INT_HT_INTDEST)
#define V_BCM1480_INT_HT_INTDEST(x) _SB_MAKEVALUE(x, S_BCM1480_INT_HT_INTDEST)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define G_BCM1480_INT_HT_INTDEST(x) _SB_GETVALUE(x, S_BCM1480_INT_HT_INTDEST, M_BCM1480_INT_HT_INTDEST)
#define S_BCM1480_INT_HT_VECTOR 13
#define M_BCM1480_INT_HT_VECTOR _SB_MAKEMASK(8, S_BCM1480_INT_HT_VECTOR)
#define V_BCM1480_INT_HT_VECTOR(x) _SB_MAKEVALUE(x, S_BCM1480_INT_HT_VECTOR)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define G_BCM1480_INT_HT_VECTOR(x) _SB_GETVALUE(x, S_BCM1480_INT_HT_VECTOR, M_BCM1480_INT_HT_VECTOR)
#define M_BCM1480_HTVECT_RAISE_INTLDT_HIGH 0x00
#define M_BCM1480_HTVECT_RAISE_MBOX_0 0x40
#define M_BCM1480_HTVECT_RAISE_INTLDT_LO 0x80
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_BCM1480_HTVECT_RAISE_MBOX_1 0xC0
#endif
