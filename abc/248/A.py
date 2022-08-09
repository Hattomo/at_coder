# -*- coding: utf-8 -*-

S = list(map(int,input().strip()))

a = [0 for i in range(10)]
for i in range(len(S)):
    a[S[i]] += 1
for i in range(10):
    if a[i] == 0:
        print(i)
