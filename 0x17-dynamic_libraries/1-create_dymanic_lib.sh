#!/bin/bash
gcc -fpic -Wall -Wextra -Werror -pedantic -c *.c
gcc -shared -L. -o liball.so *.o
