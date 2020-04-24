// 我确认本程序完全由本人独立完成
// 姓名：葛依然
// 学号：2019012668
// 时间：2020年4月20日

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Translate(const char code[])
{
    if (!strcmp(code, "*-"))
        printf("a");
    else if (!strcmp(code, "-***"))
        printf("b");
    else if (!strcmp(code, "-*-*"))
        printf("c");
    else if (!strcmp(code, "-**"))
        printf("d");
    else if (!strcmp(code, "*"))
        printf("e");
    else if (!strcmp(code, "**-*"))
        printf("f");
    else if (!strcmp(code, "--*"))
        printf("g");
    else if (!strcmp(code, "****"))
        printf("h");
    else if (!strcmp(code, "**"))
        printf("i");
    else if (!strcmp(code, "*---"))
        printf("j");
    else if (!strcmp(code, "-*-"))
        printf("k");
    else if (!strcmp(code, "*-**"))
        printf("l");
    else if (!strcmp(code, "--"))
        printf("m");
    else if (!strcmp(code, "-*"))
        printf("n");
    else if (!strcmp(code, "---"))
        printf("o");
    else if (!strcmp(code, "*--*"))
        printf("p");
    else if (!strcmp(code, "--*-"))
        printf("q");
    else if (!strcmp(code, "*-*"))
        printf("r");
    else if (!strcmp(code, "***"))
        printf("s");
    else if (!strcmp(code, "-"))
        printf("t");
    else if (!strcmp(code, "**-"))
        printf("u");
    else if (!strcmp(code, "***-"))
        printf("v");
    else if (!strcmp(code, "*--"))
        printf("w");
    else if (!strcmp(code, "-**-"))
        printf("x");
    else if (!strcmp(code, "-*--"))
        printf("y");
    else if (!strcmp(code, "--**"))
        printf("z");
}

int main()
{
    char morse[100];

    int i, j, idx = 0;

    gets(morse);
    morse[strlen(morse)] = '|';

    for (i = 0; i < strlen(morse); i++)
    {
        /* slice */
        if (morse[i] == '|')
        {
            char code[i - idx];

            for (j = 0; j < i - idx; j++)
            {
                code[j] = morse[j + idx];
            }

            printf("%s", code);
            Translate(code);
            printf("\n");
            idx = i + 1;
        }
    }
    return 0;
}
