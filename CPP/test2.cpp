#include<bits/stdc++.h>
using namespace std;

int main()
{
    uint32_t n = 3;
    bool i = n & 1;
    int digit = 32;
    int count = 0;
    while (digit--)
    {
        if (n & 3) 
        {
            cout << "good" << endl;
            n = n >> 1;
        }
        else
        {
            cout << "bad" << endl;
            n = n >> 1;
        }
        count += 1;
        
    }
    cout << count << endl;
    return 0;
}