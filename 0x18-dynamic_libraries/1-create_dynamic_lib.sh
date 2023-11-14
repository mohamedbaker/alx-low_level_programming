#!/bin/bash
gcc -c -Wall -Werror -fBIC *.c
gcc -shared *.o -o liball.so
 
