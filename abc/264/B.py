# -*- coding: utf-8 -*-

# @Hattomo: at_coder
# チェビシェフ距離
# max{|R-8|,|C-8|}

R, C = map(int, input().split())

def distance(R: int, C: int) -> bool:
    return max(abs(R - 8), abs(C - 8)) % 2

print("black") if distance(R, C) else print("white")
