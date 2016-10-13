#!/bin/bash
echo "Compiling JsonMinify..."
echo "g++ flags: -std=c++0x"

g++ -std=c++0x headers/minify.cpp source/json-minify-test.cpp -o json-minify

echo "Compiled"