#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int input = 0,
        sum = 0,
        add = 0,
        count = 0,
        digit = 0,
        base = 2;

    cin >> input;

    while (10 * input / 10 > 0)
    {
        digit = input % 10;
        add = digit * pow(base, count);
        sum += add;
        count += 1;
        input /= 10;
    }
    cout << sum << endl;
    
    return 0;
}