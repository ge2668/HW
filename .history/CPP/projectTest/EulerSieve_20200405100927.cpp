#include <bits/stdc++.h>
using namespace std;

int test[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

int probable(vector<int> &vec, int n) //n: start, step: 2
{
    int length = 10000, cnt = 0;
    bool composite = false;

    //sieve with test[]
    for (int j = 0; j <= length; j++)
    {
        for (int k = 0; k <= 9; k++)
        {
            if (n % test[k] == 0) //n is composite
            {
                composite = true;
                break;
            }
        }
        if (!composite)
        {
            vec[cnt++] = n;
        }
        n += 2;
    }
    return cnt;
}

int main()
{
    /* int start;
    vector<int> probablePrime;
    cin >> start;
    int count = probable(probablePrime, start); */
    vector<int> probablePrime;
    int cnt = 0, count = 5;
    while (count--)
    {
        probablePrime.push_back(cnt++);
        cout << probablePrime[count] << " ";
    }
    return 0;
}