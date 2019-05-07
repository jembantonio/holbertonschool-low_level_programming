#!/bin/bash
gcc -c -fPIC -Wall -pedantic -Werror -Wextra *.c
gcc -o -shared liball.so *.o
