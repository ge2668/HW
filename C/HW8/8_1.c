// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年4月13日

#include <stdio.h>
#include <math.h>

void factorize(int x)
{
    //int x = n;
    int floor = sqrt(x);
    int i;
    for (i = 2; i <= floor; i++)
    {
        if (x % i) // not a factor
            continue;
        else
        {
            printf("%d%c", i, '*');
            x /= i;
        }
        factorize(x);
        return;
    }
    printf("%d", x);
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    factorize(n);
    return 0;
}