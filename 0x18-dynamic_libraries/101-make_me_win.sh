#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Luyolo23/alx-low_level_programming/master/0x18-dynamic_libraries/libprint.so
export LD_PRELOAD="$PWD/../libprint.so"
