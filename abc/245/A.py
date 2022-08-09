# -*- coding: utf-8 -*-

A,B,C,D = map(int, input().split())

if A < C:
    print("Takahashi")
elif A > C:
    print("Aoki")
elif(A == C):
    if B < D:
        print("Takahashi")
    elif B > D:
        print("Aoki")
    else:
        print("Takahashi")
