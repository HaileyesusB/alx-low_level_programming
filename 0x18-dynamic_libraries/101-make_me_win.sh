#!/bin/bash
wget -P .. https://raw.githubusercontent.com/YosephMekonnenAbebe/alx-low_level_programming/main/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD="$PWD/../libinjection.so"
