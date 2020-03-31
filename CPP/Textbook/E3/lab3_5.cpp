#include<iostream>
using namespace std;

int fib(int n)
{
    int val;
    if (n == 1 || n == 2) val = 1;
    else val = fib(n - 1) + fib(n - 2);
    return val;
}

int main()
{
    int n, ans;
    cin >> n;
    ans = fib(n);
    cout << ans;
    return 0;
}