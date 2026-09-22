// ==========================================================
// 852. Peak Index in a Mountain Array
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 63.5 MB (Beats 79%)
// Link       : https://leetcode.com/problems/peak-index-in-a-mountain-array/
// ==========================================================

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int  l=0;
        int r=arr.size()-1;
        while(l<r)
        {
            int mid=(l+r)/2;
            if(arr[mid]<arr[mid+1])
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }

        }
        return r;
    }
};