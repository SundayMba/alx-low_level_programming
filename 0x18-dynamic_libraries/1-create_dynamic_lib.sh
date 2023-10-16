#!/usr/bin/bash
sudo gcc -fpic -c *.c # Generate an object file given
sudo gcc -shared -o liball.so *.o
