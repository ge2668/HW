#include <bits/stdc++.h>
using namespace std;

double square(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double height, square, base;

    if (x1 != x2)
    {
        double c = y1 + (y2 - y1) * (x3 - x1) / (x2 - x1);
        base = (y3 > c)? y3 - c : c - y3;
        height = (x2 > x1)? x2 - x1 : x1 - x2;
    }
    else
    {
        base = (y1 > y2)? y1 - y2 : y2 - y1;
        height = (x3 > x1)? x3 - x1 : x1 - x3;
    }

    square = base * height / 2.0;
    return square;
}

double main() 
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << fixed << setprecision(3) << square(x1, y1, x2, y2, x3, y3) << endl;
    return 0;
}