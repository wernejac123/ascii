#!/bin/bash

gcc -g -Wall -Werror -Wextra -Wconversion ascii.c -o ascii
strip -s ascii
