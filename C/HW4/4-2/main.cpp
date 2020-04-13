// 我确认本程序完全由本人独立完成 
// 姓名：葛依然 
// 学号：2019012668
// 时间：2020年3月4日 

#include<iostream>
using namespace std;

int main()
{
    int n = 1000, i = 1;

    while (i <= n)
    {
        if (i % 11 == 0 && i % 17 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}