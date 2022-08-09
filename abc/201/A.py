# -*- coding: utf-8 -*-

A = list(map(int, input().split()))

A = sorted(A)
if (A[2] - A[1] == A[1] - A[0]):
    print("Yes")
else:
    print("No")
