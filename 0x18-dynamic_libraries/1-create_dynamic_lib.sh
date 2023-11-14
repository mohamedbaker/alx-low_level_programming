#!/bin/bash
gcc -c -fBIC *.c
gcc -shared *.o -o liball.so 
