# -*- coding: utf-8 -*-

R, C = map(int, input().split())
A = []
for i in range(2):
    A.append(list(map(int, input().split())))

print(A[R - 1][C - 1])
