#include<iostream>
using namespace std;

int main()
{
    int n, digit, sum = 0;
    cin >> n;
    while (10 * n / 10 != 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << sum << endl;
    return 0;

}