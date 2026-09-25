// ==========================================================
// 304. Range Sum Query 2D - Immutable
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 21 ms (Beats 70%)
// Memory     : 149.2 MB (Beats 60%)
// Link       : https://leetcode.com/problems/range-sum-query-2d-immutable/
// ==========================================================

class NumMatrix {
public:
    vector<vector<int>> matrix;
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        long long m=matrix.size();
        long long n=matrix[0].size();
        prefix.resize(m, vector<int>(n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                prefix[i][j]=matrix[i][j];
                if(i>0)
                {
                    prefix[i][j]+=prefix[i-1][j];
                }
                if(j>0)
                {
                    prefix[i][j]+=prefix[i][j-1];
                }
                if(i>0&&j>0)
                {
                    prefix[i][j]-=prefix[i-1][j-1];
                }
            }
        }
        this->prefix = prefix;
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
     int total=0;
     if(row1==0 && col1==0)
     {
        return prefix[row2][col2];
     }

     if(col1==0&&row1>0)
     {
         total+=prefix[row2][col2]-prefix[row1-1][col2];
     }
     else if(col1>0 && row1==0)
     {
        total+=prefix[row2][col2]-prefix[row2][col1-1];
     }
     else
     {
        total+=prefix[row2][col2]-prefix[row1-1][col2]-prefix[row2][col1-1]+prefix[row1-1][col1-1];
     }
     return total;

    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */