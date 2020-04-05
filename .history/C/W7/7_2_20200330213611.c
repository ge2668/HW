// 我确认本程序完全由本人独立完成 
// 姓名：葛依然 
// 学号：2019012668
// 时间：2020年3月30日 

#include<stdio.h>
#include<math.h>
#define pi 3.1415926

double across(double x)
{
    double ans, origin = pi / 2;
    if (x == 0) ans = origin;
    else
    {
        ans = origin - x - pow(x, 3) / 6.0 - 3 * pow(x, 5) / 40.0 - 15 * pow(x, 7) / 336.0;
    }
    return ans;
}
int main()
{
    double x;
    scanf("%lf", &x);
    printf("%.5lf", across(x));
    return 0;

}