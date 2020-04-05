#include <bits/stdc++.h>
using namespace std;

int test[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107};
vector<int> probablePrime;

void probable(int n) //n: start, step: 2
{
    int length = 10000, cnt = 0;

    //sieve with test[]
    for (int j = 0; j <= length; j++)
    {
        for (int k = 0; k <= sizeof(test); k++)
        {
            if (!(n % test[k]) || n / test[k] == 1) //n is composite
            {

                break;
            }
        }
        probablePrime[cnt++] = n;
        n += 2;
    }
}

int main()
{
    int start;
    cin >> start;
    probable(start);
    int count = sizeof(probablePrime);
    while (count--)
    {
        cout << probablePrime[count] << " ";
    }
    return 0;
}