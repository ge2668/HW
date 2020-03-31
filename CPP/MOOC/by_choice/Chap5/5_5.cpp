#include<bits/stdc++.h>
using namespace std;

class Solution
{
 public:
    int longestValidParentheses(string s);
};

int Solution::longestValidParentheses(string s)
{
    int longestCount = 0, presentCount = 0, len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
        {
            if (s[i+1] == ')') presentCount += 1;
            if (!(s[i+2] == '(' && s[i+3] == ')'))
            {
                longestCount = (longestCount > presentCount)? longestCount : presentCount;
                presentCount = 0;
            }
        }
    }
    return longestCount * 2;
}

int main()
{
    Solution s;
    string str;
    getline(cin, str);
    cout << s.longestValidParentheses(str);
    return 0;
}