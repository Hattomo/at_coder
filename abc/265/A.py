# -*- coding: utf-8 -*-

from collections import Counter

l = list(map(int, input().split()))
c = Counter(l)
if c.most_common()[0][1] == 3 and c.most_common()[1][1] == 2:
    print("Yes")
else:
    print("No")
