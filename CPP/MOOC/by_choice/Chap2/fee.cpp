/*students please write your program here*/
#include<iostream>
using namespace std;

int main()
{
    int sum;
    cin >> sum;
    int fee = sum * 0.01;
    if (fee > 50) cout << 50 << endl;
    else cout << fee << endl;
    return 0;
}