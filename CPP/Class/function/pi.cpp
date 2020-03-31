#include<iostream>
using namespace std;

double arctan(double x)
{
    double r = 0;
    int denominator = 1;
    double sqr = x * x, numerator = x;
    while (numerator / denominator > 1e-15)
    {
        double add = numerator / denominator;
        r = (denominator % 4 == 1)? r + add: r - add;
        denominator += 2;
        numerator *=sqr;
    }
    return r;
}

int main()
{
    double a = arctan(1/5.0); //note that 5.0 is a float number, if we used 5, the parameter would become 0
    double b = arctan(1/239.0);
    double pi = 16 * a - 4 * b;
    cout << pi << endl;
    return 0;
}