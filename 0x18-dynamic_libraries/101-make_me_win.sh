#!/bin/bash
get -p .. https://raw.githubusercontent.com/Rosemwende/alx-low_level_programming/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD="$PWD/../libtest.so"
