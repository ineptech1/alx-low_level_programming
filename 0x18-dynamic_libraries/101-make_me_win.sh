#!/bin/bash
wget -P /tmp https://github.com/ineptech1/alx-low_level_programming/raw/main/0x18-dynamic_libraries/iwin.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
d52e6c18e0723f5b025a75dea19ef365  gm
export LD_PRELOAD=/tmp/iwin.so
