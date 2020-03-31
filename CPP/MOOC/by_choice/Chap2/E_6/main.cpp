#include<iostream>
using namespace std;

int main()
{
    int n = 0, count = 0;
    cin >> n;
    while (n > 0)
    {
        if (n % 2 == 1) count += 1;
        n /= 2;
    }
    cout << count << endl;
    return 0;
}