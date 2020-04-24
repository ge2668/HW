// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年4月20日

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void EncryptChar(char x)
{
    if (!isalpha(x))
    {
        printf("%c", x);
    }
    else
    {
        if (x == 'Z')
        {
            printf("%c", 'a');
        }
        else if (x == 'z')
        {
            printf("%c", 'A');
        }
        else
        {
            int asciiCode = x + 1;
            printf("%c", asciiCode);
        }
    }
}

int main()
{
    char str[50];
    int i;
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        EncryptChar(str[i]);
    }

    return 0;
}