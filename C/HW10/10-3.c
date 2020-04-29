// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年4月27日

#include <stdio.h>

void addTranspose(int p[100][100], int cnt)
{
    int i, j;
    for (i = 0; i < cnt; i++)
    {
        for (j = i; j < cnt; j++)
        {
            p[i][j] += p[j][i];
            p[j][i] = p[i][j];
        }
    }
}

int main()
{
    int arr[100][100] = {0}, size, i, j;
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    addTranspose(arr, size);

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
            if (j == size - 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}