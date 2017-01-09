#!/bin/bash
gcc -fPIC -Wall -Wextra -Werror -pedantic -c *.c
gcc -shared -L. -o liball.so *.o
