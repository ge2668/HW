#include <bits/stdc++.h>
using namespace std;

int Extgcd(int a, int n, int setReturn) //a * Extgcd \equiv 1 (mod n)
{
    int gcd, inverse;
    int old_r = a, r = n;
    int old_s = 1, s = 0;
    int old_t = 0, t = 1;
    int q, tmp;
    while (r)
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
    inverse = (n + old_s % n) % n;
    switch (setReturn)
    {
    case 0:
        return gcd;
        break;

    case 1:
        return inverse;
        break;
    }
}

int main()
{
    int a, n;
    cin >> a >> n;
    cout << Extgcd(a, n) << endl;
    return 0;
}