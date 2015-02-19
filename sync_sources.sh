#!/bin/bash 

#repeat the sync until we have the folder synced
while [ ! -d root_source ]; do
      git clone https://github.com/RudyLIFE/root_source
done

while [ ! -d frameworks ]; do
      git clone https://github.com/RudyLIFE/frameworks
done

while [ ! -d packages ]; do
      git clone https://github.com/RudyLIFE/packages
done

while [ ! -d kernel ]; do
      git clone https://github.com/RudyLIFE/kernel
done

while [ ! -d device ]; do
      git clone https://github.com/RudyLIFE/device
done

while [ ! -d ndk ]; do
      git clone https://github.com/RudyLIFE/ndk
done

while [ ! -d vendor ]; do
      git clone https://github.com/RudyLIFE/vendor
done

while [ ! -d tools ]; do
      git clone https://github.com/RudyLIFE/tools
done

while [ ! -d hardware ]; do
      git clone https://github.com/RudyLIFE/hardware
done

while [ ! -d external ]; do
      git clone https://github.com/RudyLIFE/external
done

while [ ! -d external_2 ]; do
      git clone https://github.com/RudyLIFE/external_2
done

while [ ! -d prebuilts ]; do
      git clone https://github.com/RudyLIFE/prebuilts
done

while [ ! -d prebuilts_2 ]; do
      git clone https://github.com/RudyLIFE/prebuilts_2
done

while [ ! -d prebuilts_3 ]; do
      git clone https://github.com/RudyLIFE/prebuilts_3
done

while [ ! -d mediatek ]; do
      git clone https://github.com/RudyLIFE/mediatek
done

while [ ! -d mediatek_2 ]; do
      git clone https://github.com/RudyLIFE/mediatek_2
done

while [ ! -d mediatek_3 ]; do
      git clone https://github.com/RudyLIFE/mediatek_3
done

while [ ! -d mediatek_4 ]; do
      git clone https://github.com/RudyLIFE/mediatek_4
done

while [ ! -d mediatek_5 ]; do
      git clone https://github.com/RudyLIFE/mediatek_5
done

while [ ! -d mediatek_6 ]; do
      git clone https://github.com/RudyLIFE/mediatek_6
done

cp -rf root_source/* ./
cp -rf external_*/*  ./external
cp -rf prebuilts_*/*  ./prebuilts
cp -rf mediatek_*/*  ./mediatek

rm -rf mediatek_*
rm -rf external_*
rm -rf prebuilts_*
rm -rf root_source
