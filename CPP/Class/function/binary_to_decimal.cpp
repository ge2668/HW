#include<iostream>
using namespace std;

double power(double x, int n) //x to the power of n
{
    double val = 1.0;
    while (n)
    {
        val *= x;
        n--;
    }
    return val;
}

int main()
{
    int value = 0;
    cout << "Enter a 8 bit binary number: " << endl;
    for (int i = 8; i > 0; i--) 
    {
        //逐位读入二进制数据 (starting from 高位)
        char ch;
        cin >> ch;
        if (ch == '1')
        {
            value += static_cast<int>(power(2.0, i-1));
        }
    }
    cout << value << endl;
    return 0;
}