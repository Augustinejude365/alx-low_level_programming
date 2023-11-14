#!/bin/bash
wget -P .. https://rawgithubusercontent.com/Augustinejude365/alx-low_level_programming/master/0x18-dynamic_libraries/dlibgig.so
export LD_PRELOAD="$PWD/../dlibgig.so"
