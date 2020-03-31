#include<iostream>
using namespace std;

unsigned fac(unsigned n)
{   
    unsigned val = 1;
    if (n == 0) val = 1;
    else
    {
        val = n * fac(n-1);
    }
    return val;
}

int main()
{
    unsigned n;
    cin >> n;
    unsigned factorial = fac(n);
    cout << factorial;
    return 0;
}