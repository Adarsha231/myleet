/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
           mpp[nums[i]]++;
        }
        int max=0;
        int res;
        for(auto it:mpp)
        {
            if(it.second>max)
            {
                max=it.second;
                res=it.first;
            }
        }
        return res;

    }
};
