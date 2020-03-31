#include<iostream>
using namespace std;

unsigned palindromic(unsigned n)
{
    unsigned i = n;
    unsigned m = 0;
    while (i > 0)
    {
        m = m * 10 + i % 10; //将原来的数乘10加上新的一位实现反转
        i /= 10;
    }
    return m == n;
}

int main()
{
    for (int i = 11; i <= 999; i++)
    {
        if (palindromic(i) && palindromic(i * i) && palindromic(i * i * i))
        {
            cout << i << endl;
        }
    }
    return 0;
}