#!/bin/bash
c_files=$(ls *.c)

# Check if any .c files exist
if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile the .c files into a shared library (liball.so)
gcc -shared -o liball.so $c_files

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Dynamic library 'liball.so' created successfully."
else
    echo "Failed to create the dynamic library."
fi
