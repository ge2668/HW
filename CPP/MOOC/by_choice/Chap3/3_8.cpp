#include<bits/stdc++.h>
using namespace std;

unsigned long lcm(int x, int y)
{   
    unsigned long _b = (x > y)? x, y;
    int _s = (x == _b)? y : x;
    while (y)
}

int main()
{
    int n, ans, m1;
    cin >> n;
    cin >> m1;
    ans = m1;

    while (n - 1)
    {
        cin >> m1;
        ans = lcm(ans, m1);
        n --;
    }
    cout << ans;
    return 0;
}