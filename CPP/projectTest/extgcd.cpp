#include <bits/stdc++.h>
using namespace std;

void Extgcd(int a, int n, int &old_s) //a * Extgcd \equiv 1 (mod n)
{
    int old_r = a, r = n;
    int s = 0;
    int q, tmp, substract;
    while (r)
    {
        q = old_r / r;
        tmp = r;
        r = old_r % tmp;
        old_r = tmp;

        tmp = s;
        substract = tmp * q;
        while (old_s < substract)
        {
            old_s += n;
        }
        s = old_s - substract;
        old_s = tmp;
    }

    old_s = (n + old_s % n) % n;
}

int main()
{
    int a, n;
    cin >> a >> n;
    int x = 1;
    Extgcd(a, n, x);
    cout << x << endl;
    return 0;
}