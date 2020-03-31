#include<iostream>
typedef long long ll;
using namespace std;

int sqr(int x)
{
    ll mid, j = 1, num = x;

    while (j < x)
    {
        mid = (x + num) / 2;
        ll square = mid * mid;
        if (square == x) return 1;
        else if (square < x) j += 1;
        else num -= 1;
    }
    return 0;
}


int main()
{
    ll n;
    cin >> n;

    for (ll i = 1; i < n; i++)
    {
        if (sqr(i + 100) && sqr(i + 268)) cout << i << endl;
    }
    return 0;
}