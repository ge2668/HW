#include<iostream>
using namespace std;

double power(double x, int n)
{
    double val = 1.0;
    while (n)
    {
        val *= x;
        n--;
    }
    return val;
}

int main()
{
    double pow;
    pow = power(5, 2);
    cout << pow;
    return 0;
}