// ==========================================================
// 18. 4Sum
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 23 ms (Beats 56%)
// Memory     : 17.6 MB (Beats 26%)
// Link       : https://leetcode.com/problems/4sum/
// ==========================================================

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,int target) {
        long long n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for( int i=0;i<n-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
             {
                continue;
             }
            for(int j=i+1;j<n-2;j++)
            {
               if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue;
            }
              
            
            int l=j+1;
            int k=n-1;
            while(l<k)
            { 

                long long  sum=1LL*nums[i]+nums[j]+nums[l]+nums[k];
                if(sum==target)
                {
                    ans.push_back({nums[i],nums[j],nums[l],nums[k]});
                    l++;
                    k--;
                while(l<k&&nums[l]==nums[l-1])
                {
                    l++;
                }
                while(l<k&&nums[k]==nums[k+1])
                {
                    k--;
                }
                }
                else if(sum<target)
                {
                    l++;
                }
                else
                {
                    k--;
                }

            }
        }
        }
        return ans;
    }
};