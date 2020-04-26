#include <iostream>
using namespace std;

int main()
{
    char str1[] = "when in Rome, ";
    char str2[] = "do as the Romans do.";
    char str[100];

    int len1 = sizeof(str1) / sizeof(*str1);
    int len2 = sizeof(str2) / sizeof(*str2);
    for (int i = 0; i < len1; i++)
    {
        //cout << *(str2 + i);
        *(str + i) = *(str1 + i);
    }

    for (int j = 0; j < len2; j++)
    {
        *(str + len1 + j - 1) = *(str2 + j);
    }

    cout << str << endl;
}