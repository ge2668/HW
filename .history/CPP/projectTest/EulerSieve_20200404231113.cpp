#include <bits/stdc++.h>
using namespace std;

int test[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107};

void probable(vector<int> &vec, int n) //n: start, step: 2
{
    int length = 10000, cnt = 0;
    bool composite = false;

    //sieve with test[]
    for (int j = 0; j <= length; j++)
    {
        for (int k = 0; k <= sizeof(test); k++)
        {
            if (n % test[k] == 0) //n is composite
            {
                composite = true;
                break;
            }
        }
        if (!composite)
        {
            vec[cnt] = n;
            cnt++;
        }
        n += 2;
    }
}

int main()
{
    /* int start;
    vector<int> probablePrime;
    cin >> start;
    probable(probablePrime, start);
    int count = sizeof(probablePrime);
    while (count--)
    {
        cout << probablePrime[count] << " ";
    } */
    cout << test[0];
    return 0;
}