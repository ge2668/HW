/* #include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double p;
    unsigned long k;
    cin >> p >> k;
    double np = 1 - p;
    double expectancy = 0, _add;

    for (int i = 1; i <= k; i++)
    {
        if (i != k) 
        {
            _add = i * p * pow(np, i-1);
        }
        else 
        {
            _add = k * pow(np, k - 1);
        }
        expectancy += _add;
    }
    cout << fixed << setprecision(2) << expectancy << endl;
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //clock_t startTime,endTime;
    int k;
    double p, val;
    cin >> p >> k;

    //startTime = clock();
    val = (1 - pow((1 - p), k)) / p;
    //endTime = clock();

    cout << fixed << setprecision(2) << val << endl;
    //cout << endTime - startTime << endl; 

    return 0;
}