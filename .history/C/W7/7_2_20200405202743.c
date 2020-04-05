// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年4月5日

#include <stdio.h>
#include <math.h>
#define pi 3.1415926

double arccos(double x)
{
    double smaller = 0, bigger = pi;
    double middle = (smaller + bigger) / 2.0;
    double ans = cos(middle);

    while (abs(ans - x) > 1e-12)
    {
        if (ans > x)
        {
            smaller = middle;
        }
        else
        {
            bigger = middle;
        }
        middle = (smaller + bigger) / 2.0;
        ans = cos(middle);
    }
    return middle;
}

int main()
{
    double x;
    scanf("%lf", &x);
    printf("%.5lf ", arccos(x));
    return 0;
}