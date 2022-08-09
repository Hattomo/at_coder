# -*- coding: utf-8 -*-

L1, R1, L2, R2 = map(int, input().split())

x1 = range(L1, R1 + 1)
x2 = range(L2, R2 + 1)
if len(set(x1) & set(x2)) -1 >= 0:
    print(len(set(x1) & set(x2)) -1)
else:
    print(0)
