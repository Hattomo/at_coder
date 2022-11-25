#!/bin/bash

dir_path="/workspaces/at_coder/abc/260/*"
dirs=`find $dir_path -maxdepth 0 -type f -name *.txt`

for dir in $dirs;
do
    python C.py < $dir
done
