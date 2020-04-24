#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, x;
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> x;
        *(arr + i) = x;
        //cout << *(arr + i);
    }

    int sum[n];
    sum[0] = arr[0];
    int j;
    for (j = 1; j < n; j++)
    {
        sum[j] = max(sum[j - 1] + arr[j], arr[j]);
    }

    int k, ans = sum[0];
    for (k = 1; k < n; k++)
    {
        if (sum[k] > ans)
        {
            ans = sum[k];
        }
    }

    cout << ans;

    return 0;
}
