#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    int res; 
    for (res = (x < y)? x : y; res >= 1; res--)
    {
        if (x % res == 0 && y % res == 0)
        {
            break;
        }
    }
    return res;
}

int main()
{
    int n, m1, m2, ans;
    cin >> n;
    cin >> m1;
    ans = m1;
    while (n - 1)
    {
        cin >> m2;
        ans = gcd(ans, m2);
        n --;
    }
    cout << ans;
    return 0;
}