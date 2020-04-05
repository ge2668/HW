#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int test[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

int probable(vector<int> &vec, int n) //n: start, step: 2
{
    int length = 100000, cnt = 0;
    bool composite;

    //sieve with test[]
    for (int j = 0; j <= length; j++)
    {
        composite = false;
        for (int k = 0; k <= 9; k++)
        {
            if (n % test[k] == 0 && n / test[k] != 1) //n is composite
            {
                composite = true;
                break;
            }
        }
        if (!composite)
        {
            vec.push_back(n);
            cnt++;
        }
        n += 2;
    }
    return cnt;
}

int main()
{

    int start;
    vector<int> probablePrime;
    cin >> start;
    auto tStart = system_clock::now();
    int count = probable(probablePrime, start);
    auto end = system_clock::now();
    auto duration = duration_cast<microseconds>(end - tStart);
    cout << double(duration.count()) * microseconds::period::num / microseconds::period::den << endl;

    /* while (count--)
    {
        //probablePrime.push_back(cnt++);
        cout << probablePrime[count] << " ";
        //count++;
    } */
    return 0;
}