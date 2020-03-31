#include <iostream>
using namespace std;

int _max(int a, int b, int c)
{
    int _max = (a > b && a > c)? a : (b > a && b > c)? b : c;
    return _max;
}

int _min(int a, int b, int c)
{
    int _min = (a < b && a < c)? a : (b < a && b < c)? b : c;
    return _min;
}

int _middle(int a, int b, int c)
{
    int max = _max(a, b, c);
    int min = _min(a, b, c);
    int _middle = (a != max && a != min)? a : (b != max && b != min)? b : c;
    return _middle;
}

void checkTriangle(int a, int b, int c) 
{
    int max = _max(a, b, c), min = _min(a, b, c), middle = _middle(a, b, c);
    int max_sqr = max * max, min_sqr = min * min, middle_sqr = middle * middle;

    if (min + middle <= max) cout << 0 << endl;
    else
    {
        if (min_sqr + middle_sqr == max_sqr) cout << 2 << endl;
        else
        {
            if (min_sqr + middle_sqr > max_sqr) cout << 1 << endl;
            else cout << 3 << endl;
        }
        
    }

}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    checkTriangle(a, b, c);
    return 0;
}