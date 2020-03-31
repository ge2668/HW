#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = c;
    c = b;
    b = a;
    a = x;
    cout << a << " " << b << " " << c << endl;
    return 0; 
}
    