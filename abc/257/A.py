# -*- coding: utf-8 -*-

N, X = map(int, input().split())

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
s = ""
for char in alphabet:
    s += char * N
print(s[X - 1])
