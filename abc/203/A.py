# -*- coding: utf-8 -*-

import collections

A = list(map(int, input().split()))
counter = collections.Counter(A)

if counter.most_common()[0][1] == 2:
    print(counter.most_common()[1][0])
elif counter.most_common()[0][1] == 3:
    print(counter.most_common()[0][0])
else:
    print(0)
