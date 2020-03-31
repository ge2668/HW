#include<bits/stdc++.h>
using namespace std;

int method(int x)
{
    int res;
    if (x == 1) res = 1;
    else if (x == 2) res = 2;
    else if (x == 3) res = 4;
    else
    {
        res = method(x - 1) +  method(x - 2) +  method(x - 3);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << method(n);
    return 0;
}