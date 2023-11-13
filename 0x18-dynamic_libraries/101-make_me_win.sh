#!/bin/bash
wget https://github.com/kawtaralx/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libgiga.so -P ../
export LD_PRELOAD=../libgiga.so
