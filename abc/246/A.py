# -*- coding: utf-8 -*-

import collections
a = []

for i in range(3):
    a.append(list(map(int, input().split())))
x = collections.Counter([a[0][0], a[1][0], a[2][0]]).most_common()
y = collections.Counter([a[0][1], a[1][1], a[2][1]]).most_common()
print(x[1][0], y[1][0])
