#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n)
{
    stringstream ss;
    if (n == 1)
    {
        return "1";
    }
    else
    {
        int count = 0;
        string s_re = countAndSay(n - 1);
        for (int i = 0, len = s_re.length(); i < len; i ++)
        {
            count += 1;
            if (s_re[i+1] != s_re[i] || i == len)
            {
                ss << count << s_re[i];
                count = 0;
            }
        }
        return ss.str();
    }
}

int main()
{
    int n;
    cin >> n;
    cout << countAndSay(n);
    return 0;
}