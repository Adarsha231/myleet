// ==========================================================
// 162. Find Peak Element
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 12.8 MB (Beats 17%)
// Link       : https://leetcode.com/problems/find-peak-element/
// ==========================================================

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int l=0;
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