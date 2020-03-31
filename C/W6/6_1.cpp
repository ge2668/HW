// 我确认本程序完全由本人独立完成 
// 姓名：葛依然 
// 学号：2019012668
// 时间：2020年3月23日 

#include<bits/stdc++.h>
using namespace std;

int com(int k, int n)
{
    int val;

    if (k == 0 || k == n)
    {
        val = 1;
    }
    else
    {
        val = com(k, n - 1) + com(k - 1, n - 1);
    }

    return val;
}

int main()
{
    int k, n;
    cin >> k >> n;
    cout << com(k, n) << endl;
    return 0;
}