#include<iostream>
using namespace std;

int main()
{
    int n = 0,
        sum = 0,
        number = 0;

    cin >> n;
    cin >> number;
    
    sum += number;
    int max_num = number, min_num = number;

    for (int i = 1; i < n; i++)
    {
        cin >> number;
        sum += number;
        if (number > max_num)
        {
            max_num = number;
        }
        else if (number < min_num)
        {
            min_num = number;
        }
    }

    cout << sum << " " << min_num << " "  << max_num << endl;

    return 0;
}