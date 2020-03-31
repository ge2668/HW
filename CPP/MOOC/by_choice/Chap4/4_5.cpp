#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        string reverseString(string s);
};

string Solution::reverseString(string s)
{
    stringstream ss;
    int len = s.length();
    for (int i = len - 1; i >= 0; i--)
    {
        ss << s[i];
    }
    return ss.str();
}

int main()

{

	Solution s;	
	string str;
	getline(cin,str);
	cout<<s.reverseString(str);
	return 0;

}