#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -fpic ./*.c
gcc -o -shared liball.so ./*.o
