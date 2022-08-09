# -*- coding: utf-8 -*-

import math

N = int(input())
if math.floor(1.08 * N) < 206:
    print("Yay!")
elif math.floor(1.08 * N) == 206:
    print("so-so")
else:
    print(":(")
