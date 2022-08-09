# -*- coding: utf-8 -*-
from collections import defaultdict

N = int(input())
d = defaultdict(int)

for i in range(N):
    key = input()
    d[key] += 1
    if d[key] == 1:
        print(key)
    else:
        print(f"{key}({d[key]-1})")
