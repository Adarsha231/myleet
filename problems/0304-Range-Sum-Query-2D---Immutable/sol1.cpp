// ==========================================================
// 304. Range Sum Query 2D - Immutable
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 70 ms (Beats 7%)
// Memory     : 149.2 MB (Beats 60%)
// Link       : https://leetcode.com/problems/range-sum-query-2d-immutable/
// ==========================================================

class NumMatrix {
public:
    vector<vector<int>> matrix;
    NumMatrix(vector<vector<int>>& matrix) {
        long long m=matrix.size();
        long long n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                matrix[i][j]=matrix[i][j-1]+matrix[i][j];
            }
        }
        this->matrix = matrix;
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total=0;
        for(int i=row1;i<=row2;i++)
        {
          if(col1==0)
          {
            total+=matrix[i][col2];
          }
          else
          {
            total+=matrix[i][col2]-matrix[i][col1-1];
          }
        }
     return total;

    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */