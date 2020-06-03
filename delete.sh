#!/bin/sh
find . -not -path "*/.git/*" -type f ! -name "*.*"
find . \( -name "a.out" -or -name "a.exe" \) 
find . -not -path "*/.git/*" -type f ! -name "*.*"  | xargs rm -rf
find . \( -name "a.out" -or -name "a.exe" \) | xargs rm -rf