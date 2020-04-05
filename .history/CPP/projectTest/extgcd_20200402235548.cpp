#include <bits/stdc++.h>
using namespace std;

int modInverse(int a, int n) //a * modInverse \equiv 1 (mod n)
{
    int gcd, inverse;
    int old_r = a, r = b;
    int old_s = 1, s = 0;
    int old_t = 0, t = 1;
    int q, tmp;
    while (!r)
    {
        q = old_r / r;
        tmp = r;
        r = old_r % tmp;
        old_r = tmp;

        tmp = s;
        s = old_s - tmp * q;
        old_s = tmp;

        tmp = t;
        t = old_t - tmp * q;
        old_t = tmp;
    }
    gcd = old_r;
    inverse = old_s % n;
    return inverse;
}

int main()
{
    int a, n;
    cin >> a >> n;
    cout << modInverse(a, n) << endl;
    return 0;
}