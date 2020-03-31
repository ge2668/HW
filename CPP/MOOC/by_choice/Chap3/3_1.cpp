#include<iostream>
using namespace std;

int hammingWeight(long x)
{
    int y = 1, count = 0;
    while(y)
    {
        if (x & y) //比如1001与0001进行与运算，只要结果不为0，就代表1001中最后一个数为1
        {
            count ++;
        }
        y = y << 1; //y左移1位，如0001-> 0010，从而判断下一位是否为1
    }
    return count;
}

int main()
{
    long n;
    cin >> n;
    cout << hammingWeight(n) << endl;
    return 0;
}