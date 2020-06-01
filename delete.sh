#!/bin/sh
find . -not -path "*/.git/*" -type f ! -name "*.*"
find . -not -path "*/.git/*" -type f ! -name "*.*"  | xargs rm -rf