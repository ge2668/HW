#include<iostream>
using namespace std;

int calc(int x)
{
    int val;
    if (x == 0) return 1;
    else if (x == 1) return 1;
    else
    {
        val = calc(x-1) + calc(x-2);
        return val;
    }
}

int main()
{
    int n = 0;
    cin >> n;
    int n_th = calc(n);
    cout << n_th << endl;
    return 0;
}
//0 1 1 2 3 5 8 13