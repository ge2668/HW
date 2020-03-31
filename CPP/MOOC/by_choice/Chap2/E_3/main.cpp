#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    int num_2 = 0, num_5 = 0, i_;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        i_ = i;
        while (i_ % 2 == 0)
        {
            i_ /= 2;
            num_2 +=1;
        }
    
        while (i_ % 5 == 0)
        {
            i_ /= 5;
            num_5 +=1;
        }
    }
    
    int num_0 = (num_2 >= num_5)? num_5: num_2;
    cout << num_0 << endl;
    
    return 0;
}