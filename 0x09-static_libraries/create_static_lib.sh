#!/bin/bash
echo $(gcc -c *.c) | $(ar rc liball.a *.o)
