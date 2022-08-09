# -*- coding: utf-8 -*-

N, X, Y = map(int, input().split())

blue = [0] * 10
red = [0] * 10
red[N - 1] = 1

level = N - 1
while 0 < sum(red[1:]) or 0 < sum(blue[1:]):
    blue[level] += X * red[level]
    red[level - 1] += red[level]
    red[level] = 0
    red[level - 1] += blue[level]
    blue[level - 1] += blue[level] * Y
    blue[level] = 0
    level -= 1
print(blue[0])
