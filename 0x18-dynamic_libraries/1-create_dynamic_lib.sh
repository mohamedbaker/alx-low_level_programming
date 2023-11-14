#!/bin/bash
gcc -c -fBIC *.c
gcc -shared -o liball.so *.o
