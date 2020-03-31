// 我确认本程序完全由本人独立完成 
// 姓名：葛依然 
// 学号：2019012668
// 时间：2020年3月30日 

#include<stdio.h>
//#include<iostream>
//#include<iomanip>


#define pi 3.1415926
#define volume(x) (4.0 / 3) * (pi) * (x) * (x) * (x)

int main()
{
    double r;
    scanf("%lf", &r);
    //cin >> r;
    double ans = volume(r);
    printf("%.5f", ans);
    //cout << fixed << setprecision(5) << ans << endl;
    return 0;
}