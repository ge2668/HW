#include<bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t n)
{
    uint32_t ans = 0;
    int digit = 32;
    while (digit--) 
    {
        ans <<= 1;
        ans |= (n & 1);
        n >>= 1;
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    cout << reverseBits(num) << endl;
    return 0;
}