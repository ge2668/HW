// 我确认本程序完全由本人独立完成 
// 姓名：葛依然 
// 学号：2019012668
// 时间：2020年3月23日 

#include<bits/stdc++.h>
using namespace std;

/* int main()
{
    int n, f = 0;
    cin >> n;
    while (n)
    {
        f += 1;
        n = n >> 1;
    }
    cout << f;
    return 0;
} */

int fun(int x, int step)
{
    if (!x) return step;
    fun (x >> 1, step + 1);
}

int main()
{
    int n, step = 0;
    cin >> n;
    cout << fun(n, step) << endl;
    return 0;
}