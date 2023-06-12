#!/bin/bash
gcc -c *.c
ar rc liball.a *.o
rm -f *.o
echo "Static library liball.a created"
