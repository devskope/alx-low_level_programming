#!/bin/bash
wget -O /tmp/win.so https://github.com/devskope/alx-low_level_programming/raw/main/0x18-dynamic_libraries/poisonrand.so
export LD_PRELOAD=/tmp/win.so
