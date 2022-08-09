# -*- coding: utf-8 -*-

K = int(input())

if K // 60 == 1:
    print(f"22:{str(K%60).zfill(2)}")
else:
    print(f"21:{str(K%60).zfill(2)}")
