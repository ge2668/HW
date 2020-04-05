// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年3月30日

#include <stdio.h>
#include <math.h>
#define pi 3.1415926

double arccos(double x)
{
    double smaller = 0, bigger = pi;
    double middle = (smaller + bigger) / 2.0;
    double tmp = cos(middle);

    while (abs(tmp - x) > 1e-10)
    {
        if (tmp > x)
        {
            smaller = tmp;
        }
        else
        {
            bigger = tmp;
        }
        middle = (smaller + bigger) / 2.0;
        tmp = cos(middle);
    }
    return middle;
}
int main()
{
    double x;
    scanf("%lf", &x);
    printf("%.5lf", arccos(x));
    return 0;
}