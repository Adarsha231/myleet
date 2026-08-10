/*
73. Set Matrix Zeroes
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> arr1(m, 0);
        vector<int> arr2(n, 0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(mat[i][j]==0)
              {
                arr1[i]=1;
                arr2[j]=1;
              }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(arr1[i]==1||arr2[j]==1)
              {
                mat[i][j]=0;
              }
            }
        }


    }
};


//Optimal
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int col0=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    if(j!=0)
                    {
                        matrix[0][j]=0;
                    }
                    else
                    {
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
               if(matrix[i][j]!=0)
               {
                if(matrix[i][0]==0||matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
               }
            }
        }
        if(matrix[0][0]==0)
        {
            for(int j=0;j<n;j++)
            {
                matrix[0][j]=0;
            }
        }
        if(col0==0)
        {
            for(int i=0;i<m;i++)
            {
                matrix[i][0]=0;
            }
        }

    }
};




