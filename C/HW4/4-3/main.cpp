// 我确认本程序完全由本人独立完成 
// 姓名：葛依然 
// 学号：2019012668
// 时间：2020年3月11日 
#include<stdio.h>
#include<math.h>

int main()
{
    int sum;
    for (int i = 100; i<= 999; i++)
    {
        int j = i;
        sum = 0;
        do
        {   
            sum += pow(j % 10, 3);
            j /= 10;
        } while (10 * j / 10 != 0);
        if (sum == i) printf("%d\n", i);
    }
    return 0;
}