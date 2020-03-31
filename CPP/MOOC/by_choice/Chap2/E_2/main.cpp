#include<iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    int ppre = 0, pre = 1, val = 0;
    cin >> n;

    if (n==0) val = ppre;
    else if (n==1) val = pre;
    else
    {
        while (n-1)
        {
            val = ppre + pre;
            ppre = pre;
            pre = val;
            n --;
        }
    }
    
    cout << val << endl;
    return 0;
}