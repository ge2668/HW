#include <stdio.h>
#include <math.h>
#define pi 3.1415926

int main()
{
    double x;
    scanf("%lf", &x);
    printf("%.5lf ", acos(x));
    return 0;
}