// ==========================================================
// 1816. Truncate Sentence
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 9.2 MB (Beats 12%)
// Link       : https://leetcode.com/problems/truncate-sentence/
// ==========================================================

class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<char> ans;
        int n=s.length();
        int j=0;
        for(char ch:s)
        {
            if(ch==' ')
            {
                j++;
                if(j==k)
                {
                    break;
                }
                ans.push_back(ch);
            }
            else
            {
                ans.push_back(ch);
            }
            if(j==k)
            {
                break;
            }
        }
        return string(ans.begin(),ans.end());
    }
};