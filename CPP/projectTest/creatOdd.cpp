#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int length = 10;
    const int digit[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    stringstream ss;
    srand((unsigned)time(NULL));
    for (int i = 0; i < length - 1; i++)
    {
        ss << digit[rand() % 10];
    }
    ss << digit[2 * (rand() % 5) + 1];
    cout << ss.str();
    return 0;
}