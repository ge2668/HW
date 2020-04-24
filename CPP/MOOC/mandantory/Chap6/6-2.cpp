#include <iostream>
#include <sstream>
using namespace std;

int dp[15][15];

int countPalindrome(string str)
{
    int len = str.length();
    int i, j;
    for (j = 0; j < len; j++)
    {
        dp[j][j] = 1;
        for (i = j - 1; i >= 0; i--)
        {
            if (str[i] == str[j])
            {
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] + 1;
            }
            else
            {
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1];
            }
        }
    }
    return dp[0][len - 1];
}

int main()
{
    string str;
    cin >> str;
    int cnt = countPalindrome(str);
    cout << cnt;
    return 0;
}