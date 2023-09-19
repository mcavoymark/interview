#!/usr/bin/env python3

from typing import List

class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n=len(matrix)
        #transpose
        for i in range(n):
            for j in range(i,n):
                #print(f'[{i},{j}]')
                matrix[i][j],matrix[j][i] = matrix[j][i],matrix[i][j]

        #reverse
        for i in range(n):
            for j in range(n//2):
                print(f'[{i},{j}]')
                matrix[i][j],matrix[i][n-j-1] = matrix[i][n-j-1],matrix[i][j]





if __name__ == "__main__":
    matrix = [[1,2,3],[4,5,6],[7,8,9]]
    print(matrix)
    #print(rotate(matrix))
    Solution().rotate(matrix)

