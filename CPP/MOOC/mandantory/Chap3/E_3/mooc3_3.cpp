#include<iostream>
using namespace std;

bool factor(int x)
{

   while (x % 2 == 0) x /= 2;
   while (x % 3 == 0) x /= 3;
   while (x % 5 == 0) x /= 5;
   if (x == 1) return 1;
   else return 0;
}

int main()
{
    int n;
    cin >> n;
    if (n == 1) cout << "False" << endl;
    else
    {
        if (factor(n) == 1) cout << "True" << endl;
        else cout << "False" << endl;
    }
    return 0;
}