# ==========================================================
# 2022. Convert 1D Array Into 2D Array
# Difficulty : Easy
# Language   : Python
# Solution   : #1
# Runtime    : 27 ms (Beats 42%)
# Memory     : 25.3 MB (Beats 51%)
# Link       : https://leetcode.com/problems/convert-1d-array-into-2d-array/
# ==========================================================

class Solution:
    def construct2DArray(self, original: list[int], m: int, n: int) -> list[list[int]]:
        if len(original)!=m*n:
            return []

        index=0
        a=[[0]*n for i in range(m)]
        for i in range(m):
            for j in range(n):
                a[i][j]=original[index]
                index+=1
        return a
        