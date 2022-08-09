# -*- coding: utf-8 -*-

N = int(input())
A = []
for i in range(N):
    A.append(input().strip())

for i in range(N):
    for j in range(i + 1, N):
        if not (A[i][j] == "W" and A[j][i] == "L"):
            if not (A[i][j] == "L" and A[j][i] == "W"):
                if not (A[i][j] == "D" and A[j][i] == "D"):
                    print('incorrect')
                    exit()
print('correct')
