#include<iostream>
using namespace std;

int Max1(int x, int y)
{
    int max;
    max = (x > y)? x: y;
    return max;
}

int Max1(int x, int y, int z)
{
    int max = x;
    max = (y > max)? y: max;
    max = (z > max)? z: max;
    return max;
}

double Max1(double x, double y)
{
    double max;
    max = (x > y)? x: y;
    return max;
}

double Max1(double x, double y, double z)
{
    double max = x;
    max = (y > max)? y: max;
    max = (z > max)? z: max;
    return max;
}

int main()
{
    int a, b, c, max_val_int, max_val_ti;
    double m, n, p, max_val_double, max_val_td;
    cin >> a >> b >> c;
    cin >> m >> n >> p;

    max_val_int = Max1(a, b, c);
    max_val_ti = Max1(a, b);
    max_val_double = Max1(m, n, p);
    max_val_td = Max1(m, n);
    cout << max_val_int << max_val_ti << max_val_double << max_val_td;
    
    return 0;
}