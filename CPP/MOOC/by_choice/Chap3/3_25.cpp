#include<bits/stdc++.h>
using namespace std;

int sum7s(int n)
{
    if (n < 7) return 0;
    else
    {
        unsigned int sum = 0;
        for (int i = 7; i <= n; i += 7) sum += i;
        return sum;
    }
    
}

int main()
{
    int n;
    cin >> n;
    cout << sum7s(n) << endl;
    return 0;
}