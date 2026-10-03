// ==========================================================
// 20. Valid Parentheses
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.9 MB (Beats 65%)
// Link       : https://leetcode.com/problems/valid-parentheses/
// ==========================================================

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.length();
        if(n==1)
        {
          return false;
        }
        for(char ch:s)
        {
            if( ch=='('||ch=='['||ch=='{')
            {
                st.push(ch);

            }
            else
            {   
                if(st.empty())
                {
                  return false;
                }
                if(ch==')'&&st.top()=='('||ch==']'&&st.top()=='['||ch=='}'&&st.top()=='{')
                {
                    st.pop();
                }  
                else
                {
                    return false;
                } 
                
            }

        }
        return st.empty();
    }
};