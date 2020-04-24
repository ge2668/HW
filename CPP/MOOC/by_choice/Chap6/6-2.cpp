#include <iostream>

int main()
{
    int n, l, r, sum = 0;
    std::cin >> n >> l >> r;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> *(p + i);
    }

    for (int j = l; j <= r; j++)
    {
        sum += *(p + j);
    }

    delete[] p;
    std::cout << sum;
    return 0;
}