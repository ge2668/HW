#include<stdio.h>

int main()
{
    int n;
    double sum = 0;
    scanf("%d", &n);
    while (n)
    {
        sum += 1.0 / n;
        n --;
    }
    printf("%.6f\n", sum);
    return 0;
}