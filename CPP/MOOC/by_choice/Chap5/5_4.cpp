#include<bits/stdc++.h>
using namespace std;

int solution(string s)
{
    int ans = 1, n = s.length(), i;

    for (i = 0; i < n; i++)
    {
        if (s[i] == '1') ans *= 2;
        else if (s[i] == '2')
        {
            if (s[i+1] == '1' || s[i+1] == '2' || s[i+1] == '3'||s[i+1] == '4'||s[i+1] == '5'||s[i+1] == '6')
            {
                ans *= 2;
            }
        }
    } 
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << solution(s) << endl;
    return 0;
}