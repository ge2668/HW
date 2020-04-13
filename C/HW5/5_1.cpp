// 我确认本程序完全由本人独立完成 
// 姓名：葛依然 
// 学号：2019012668
// 时间：2020年3月20日 

#include<stdio.h>

int lcm(int a, int b)
{
    int x = (a > b)? a: b;
    int val;

    while (x)
    {
        if (x % a == 0 && x % b == 0) 
        {
            val = x;
            break;
        }
        x ++;
    }
    return val;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", lcm(x ,y));
    return 0;
}