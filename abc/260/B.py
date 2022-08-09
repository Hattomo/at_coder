# -*- coding: utf-8 -*-

N, X, Y, Z = map(int, input().split())
A = list(map(int,input().split()))
B = list(map(int,input().split()))
C = list(range(len(A)))
score = list(zip(A,B,C))

score.sort(key = lambda x: x[2])
score.sort(key = lambda x: x[0],reverse=True)
passed = []
for i in range(X):
    passed.append(score[0])
    score.pop(0)
score.sort(key = lambda x: x[2])
score.sort(key = lambda x: x[1],reverse=True)
for j in range(Y):
    passed.append(score[0])
    score.pop(0)
score.sort(key = lambda x: x[2])
score.sort(key = lambda x: x[0] + x[1],reverse=True)
for k in range(Z):
    passed.append(score[0])
    score.pop(0)
passed.sort(key = lambda x: x[2])
for l in passed:
    print(l[2] + 1)
