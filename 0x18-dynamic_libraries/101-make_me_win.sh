#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Mustyla1/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
