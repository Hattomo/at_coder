# -*- coding: utf-8 -*-

x, y = map(int, input().split())
option = list(range(3))
if x == y:
    print(x)
else:
    option.remove(x)
    option.remove(y)
    print(option[0])
