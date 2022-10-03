#!/bin/bash
gcc -Wall -pendantic -Werror _Wextra -c *.c
ar rc liball.a *.o
