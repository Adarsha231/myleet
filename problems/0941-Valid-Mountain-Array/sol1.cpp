// ==========================================================
// 941. Valid Mountain Array
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 19 ms (Beats 66%)
// Memory     : 26.4 MB (Beats 21%)
// Link       : https://leetcode.com/problems/valid-mountain-array/
// ==========================================================

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        int i=0;
        while(i+1<n && arr[i]<arr[i+1])
        {
            i++;

        }
         if(i==0 || i==n-1)
            {
                return false;
            }
         while(i+1<n && arr[i]>arr[i+1])
         {
                i++;

                
         }



        
          if(i==n-1)
                {
                    return true;
                }

         return false;
    }
    
};