# -*- coding: utf-8 -*-

from collections import Counter

S = list(input())
Scount = Counter(S).most_common()
if Scount[-1][1] == 1:
    print(Scount[-1][0])
else:
    print(-1)
