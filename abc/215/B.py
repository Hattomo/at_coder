# -*- coding: utf-8 -*-

import sys

N = int(input())

k = 0

while 2**k <= N:
    k += 1

print(k-1)
