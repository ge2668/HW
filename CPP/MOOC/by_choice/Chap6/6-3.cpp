#include <iostream>
#include <cmath>
int main()
{
    int n, ans;
    std::cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> *(p + i);
    }

    ans = fabs(*(p + 1) - *p);
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            int tmp = fabs(*(p + k) - *(p + j));
            ans = (tmp > ans) ? tmp : ans;
        }
    }
    delete[] p;
    std::cout << ans;
    return 0;
}