// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年4月20日

#include <stdio.h>

int main()
{
    int num[3][3], i, j, k, sum[8] = {0}, _sumRow = 0, _sumCol = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
            //printf("%d ", num[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i] += num[i][j];
            sum[i + 3] += num[j][i];
        }
        sum[6] += num[i][i];
        sum[7] += num[i][2 - i];
    }

    int isSame = 1;
    for (k = 1; k < 8; k++)
    {
        if (sum[0] != sum[k])
        {
            isSame = 0;
            break;
        }
    }
    printf("%d", isSame);
    return 0;
}