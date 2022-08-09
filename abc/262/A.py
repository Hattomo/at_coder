# -*- coding: utf-8 -*-

Y = int(input())
for year in range(Y, Y + 4):
    if year % 4 == 2:
        print(year)
