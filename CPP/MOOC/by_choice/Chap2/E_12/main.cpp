#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
            {
                cout << '*';
            }
            else
            {
                char out = (j == 1 || j == n)? '*': ' ';
                cout << out;
            }
        }
        cout << endl;
    }
    return 0;
}