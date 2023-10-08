#!/bin/bash

# Check if an argument was provided
if [ $# -ne 1 ]; then
    echo "Usage: $0 <line_to_insert>"
    exit 1
fi

# Define the line to insert
line_to_insert="$1"

# Specify the file in which you want to insert the line
file_path="main.h"

# Check if the file exists
if [ ! -f "$file_path" ]; then
    echo "File '$file_path' not found."
    exit 1
fi

# Create a temporary file to store the modified content
temp_file=$(mktemp)

# Use tac to reverse the file, insert the line, and then reverse it back
tac "$file_path" | sed "2s/^/$line_to_insert\n/" | tac > "$temp_file"

# Replace the original file with the modified content
mv "$temp_file" "$file_path"

echo "Line '$line_to_insert' inserted before the last line in '$file_path'."

