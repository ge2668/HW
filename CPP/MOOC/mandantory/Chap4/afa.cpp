#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int a = 3, b = 2;
    float val = (float)a / (float)b;
    float del = pow(a, 1.0/2);
    cout << val << endl << "done" << endl;
    cout << fixed << setprecision(2) << val << del;
    return 0;
}