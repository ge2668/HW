#include <iostream>
using namespace std;

int factorial(int n)
{
    long val = 1;
    if (n != 0)
    {
        while (n)
        {
            val *= n;
            n --;
        }
    }
    else 
    {
        val = 1;
    }
    return val;
}

int C(int m, int n)
{
    int sub = m - n;
    int c = factorial(m) / (factorial(sub) * factorial(n));
    return c;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << C(m, n) << endl;
    return 0;
}