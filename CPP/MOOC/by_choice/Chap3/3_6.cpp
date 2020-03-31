#include<bits/stdc++.h>
using namespace std;

int digitSum(long n)
{
    int _sum = 0, digit;
    while (n)
    {
        digit = n % 10;
        _sum += digit;
        n /= 10;
    }
    return _sum;
}

int sum(long n)
{
    int sum = digitSum(n);
    while (sum / 10 != 0)
    {
        sum = digitSum(sum);
    }
    return sum;
}

int main()
{
    long n;
    cin >> n;
    cout << sum(n);
    return 0;
}