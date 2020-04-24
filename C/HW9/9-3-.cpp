#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

void Translate(string code)
{
    if (code == "*-")
        printf("a");
    else if (code == "-***")
        printf("b");
    else if (code == "-*-*")
        printf("c");
    else if (code == "-**")
        printf("d");
    else if (code == "*")
        printf("e");
    else if (code == "**-*")
        printf("f");
    else if (code == "--*")
        printf("g");
    else if (code == "****")
        printf("h");
    else if (code == "**")
        printf("i");
    else if (code == "*---")
        printf("j");
    else if (code == "-*-")
        printf("k");
    else if (code == "*-**")
        printf("l");
    else if (code == "--")
        printf("m");
    else if (code == "-*")
        printf("n");
    else if (code == "---")
        printf("o");
    else if (code == "*--*")
        printf("p");
    else if (code == "--*-")
        printf("q");
    else if (code == "*-*")
        printf("r");
    else if (code == "***")
        printf("s");
    else if (code == "-")
        printf("t");
    else if (code == "**-")
        printf("u");
    else if (code == "***-")
        printf("v");
    else if (code == "*--")
        printf("w");
    else if (code == "-**-")
        printf("x");
    else if (code == "-*--")
        printf("y");
    else if (code == "--**")
        printf("z");
}

int main()
{
    string morse, code;
    cin >> morse;
    morse += '|';
    int i, j, idx = 0, len = morse.length();
    for (i = 0; i < len; i++)
    {
        if (morse[i] == '|')
        {
            code = morse.substr(idx, i - idx);
            idx = i + 1;
            Translate(code);
        }
    }
    //cout << morse.substr(1, 2);
}