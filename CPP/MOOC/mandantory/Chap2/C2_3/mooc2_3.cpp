#include<iostream>
using namespace std;

int main()
{
    char sign = '*',
         space = ' ';
    int n;
    cin >> n;
    int length = 2 * n - 1;

    for (int i = 1; i <= length; i++)
    {
        if (i <= n)
        {
            for (int x = 1; x <= length; x++)
            {
                char output_1 = (x >=  n - i + 1 && x <= n + i - 1)? sign: space;
                cout << output_1;
            }
        }
        else
        {
            int new_i = length + 1 - i;
            for (int x = 1; x <= length; x++)
            {
                char output_2 = (x >=  n - new_i + 1 && x <= n + new_i - 1)? sign: space;
                cout << output_2;
            }
        }
            
        cout << "\n";
    }

    return 0;
    
}