# -*- coding: utf-8 -*-

a = list(map(int, input().split()))
if a[1] == sorted(a)[1]:
    print("Yes")
else:
    print("No")
