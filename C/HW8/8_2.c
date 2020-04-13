// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年4月13日

#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, sum = 0;
    for (i = 2; i <= 9999; i++)
    {
        int floor = sqrt(i);

        for (j = 2; j <= floor; j++)
        {
            if (!(i % j))
            {
                sum += j;
                sum += i / j;
            }
        }

        if (i == sum + 1)
        {
            printf("%d\n", i);
        }

        sum = 0;
    }
    return 0;
}