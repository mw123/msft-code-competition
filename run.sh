#!/bin/bash
input="input.txt"
while IFS= read -r var
do 
    echo "$var"
    done < "$input"
