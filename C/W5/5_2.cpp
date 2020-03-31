// 我确认本程序完全由本人独立完成 
// 姓名：葛依然 
// 学号：2019012668
// 时间：2020年3月20日 


#include<stdio.h>

void print(int a, int b)
{
    static int n = a;
    printf("%12d", n);
    n *= a;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    
    for (int i = 1; i <= m; i++)
    {
        print(n, i);
        if (i % 5 == 0) printf("\n");
    }
    return 0;
}