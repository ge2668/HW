#include<bits/stdc++.h>
using namespace std;

int countZero(int n)
{
    int countTwo = 0, countFive = 0, x;
    
    while (n)
    {
        x = n;
        while (x % 2 == 0)
        {
            countTwo ++;
            x /= 2;
        }

        while (x % 5 == 0)
        {
            countFive ++;
            x /= 5;
        }
        n --;
    }
    return (countTwo > countFive)? countFive : countTwo;
}

int main()
{
    int n;
    cin >> n;
    cout << countZero(n);
    return 0;
}