#!/bin/bash
gcc -Wall -wextra -werror -pedantic -c -fPIC *.C
gcc -shared -o liball.so *.0
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
