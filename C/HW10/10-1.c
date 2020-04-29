// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年4月27日

#include <stdio.h>
#include <stdlib.h>

void stringCompare(char *s1, char *s2, int len1, int len2)
{
    int len = (len1 > len2) ? len2 : len1;
    //int equal = len1 == len2;
    int i;
    for (i = 0; i < len; i++)
    {
        if (s1[i] == s2[i])
        {
            continue;
        }
        else if (s1[i] > s2[i])
        {
            printf("%d", 1);
            return;
        }
        else
        {
            printf("%d", -1);
            return;
        }
    }

    if (len1 == len2)
    {
        printf("%d", 0);
    }
    else
    {
        if (len1 > len2)
        {
            printf("%d", 1);
        }
        else
        {
            printf("%d", -1);
        }
    }
}

int main()
{
    char str1[100] = {'\0'};
    char str2[100] = {'\0'};
    int len1 = sizeof(str1) / sizeof(str1[0]);
    int len2 = sizeof(str2) / sizeof(str2[0]);
    scanf("%s%s", str1, str2);
    stringCompare(str1, str2, len1, len2);
    return 0;
}