#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char calc;
    cin >> a >> b >> calc;
    switch (calc)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default: cout << "invalid" << endl;
        break;
    }
    return 0;
}