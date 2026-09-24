// ==========================================================
// 1. Two Sum
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 14.9 MB (Beats 45%)
// Link       : https://leetcode.com/problems/two-sum/
// ==========================================================

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int m;
        for(int i=0;i<nums.size();i++)
        {
           m=target-nums[i];
           if(mpp.find(m)!=mpp.end())
           {
               return {i,mpp[m]};
           }
           else
           {
            mpp[nums[i]]=i;
           }
        }
        return {-1};

    }
};