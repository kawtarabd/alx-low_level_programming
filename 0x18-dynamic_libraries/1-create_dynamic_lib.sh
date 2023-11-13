#!/bin/bash
gcc -fPIC -c *.C
gcc -shred *.O -o liball.SO
