#include <iostream>
using namespace std;

int sort(int *p, int len, int x)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (*(p + i) > *(p + j))
            {
                int tmp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = tmp;
            }
        }
    }
    return *(p + x);
}

int main()
{
    int cnt, n, i, k;
    cin >> cnt >> k;
    int *ptr = new int[cnt];
    for (i = 0; i < cnt; i++)
    {
        cin >> n;
        *(ptr + i) = n;
    }

    int kth = sort(ptr, cnt, k - 1);
    delete[] ptr;
    cout << kth << endl;
    return 0;
}