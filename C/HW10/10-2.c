// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年4月27日

#include <stdio.h>
#include <string.h>

void delPack(char *s, char *re, int len)
{
    int cnt = -1, idx = 0, i, j;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (*(s + i) == *(s + j))
            {
                cnt += 1;
            }
        }

        if (!cnt)
        {
            *(re + idx++) = *(s + i);
        }

        cnt = -1;
    }
}

int main()
{
    char str[100] = {'\0'};
    char re[100] = {'\0'};
    gets(str);
    int len = strlen(str);
    delPack(str, re, len);
    puts(re);
    return 0;
}