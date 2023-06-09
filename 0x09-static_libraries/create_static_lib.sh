#!/bin/bash

# create a static library called liball.a from all the .c files
gcc -c *.c
ar rcs liball.a *.o
