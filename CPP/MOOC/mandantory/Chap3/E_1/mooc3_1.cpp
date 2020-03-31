#include<iostream>
using namespace std;

int sqr(int n)
{
    return n * n;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool bool_val = (sqr(a) + sqr(b) == sqr(c)) || (sqr(a) + sqr(c) == sqr(b)) || (sqr(b) + sqr(c) == sqr(a));
    if (bool_val) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}