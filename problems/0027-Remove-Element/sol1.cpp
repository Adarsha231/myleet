// ==========================================================
// 27. Remove Element
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 11.7 MB (Beats 84%)
// Link       : https://leetcode.com/problems/remove-element/
// ==========================================================

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i=0;
        int j=0;
        while(j<n)
        {
            if(nums[j]!=val)
            {
                nums[i]=nums[j];
                i++;
                j++;
            }
            else
            {
                j++;
            }
            
        
        }
        return i;
  
    }
};