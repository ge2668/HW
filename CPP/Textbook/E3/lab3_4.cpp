#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x, y, ans;
    cin >> x >> y;
    if (x == 0 && y == 0) ans = 1;
    else ans = pow(x, y);
    cout << ans << endl;
    return 0;
}