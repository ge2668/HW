#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    unsigned long long val, pre, ppre;
    cin >> n;
    ppre = 1;
    pre = 1;

    if (n == 0 || n == 1) cout << ppre << endl;
    else
    {
        for (int i = 2; i<= n; i++)
        {
            val = pre + ppre;
            ppre = pre;
            pre = val;
        }
        cout << val << endl;
    }
    
    return 0;
}

//递归时间复杂度高