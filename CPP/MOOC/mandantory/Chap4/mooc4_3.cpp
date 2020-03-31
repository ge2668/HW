#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class Equation
{
    private:
        int _a, _b, _c;
    public:
        Equation(int a, int b, int c){_a = a; _b = b; _c = c;}
        void solve();
};

void Equation::solve()
{
    if (_a == 0)
    {
        if (_b == 0)
        {
            if (_c == 0) cout << 5 << endl;
            else cout << 4 << endl;
        }
        else 
        {
            double solution = - (float)_c / (float)_b;
            if (!solution) solution = 0; //if solution == 0 (!solution == 1) 
            cout << 6 << endl;
            cout << fixed << setprecision(2) << solution << endl;
        }
    }
    else
    {
        int delta = _b * _b - 4 * _a * _c;
        if (delta == 0)
        {
            double solution = - (float)_b / (2 * _a);
            cout << 2 << endl;
            cout << fixed << setprecision(2) << solution << endl;
        }
        else
        {
            if (delta < 0) cout << 3 << endl;
            else
            {
                double solution_1 = (- _b - sqrt(delta)) / (2 * (float)_a);
                double solution_2 = (- _b + sqrt(delta)) / (2 * (float)_a);
                cout << 1 << endl;
                if (_a > 0) cout << fixed << setprecision(2) << solution_1 << " " << solution_2 << endl;
                else cout << fixed << setprecision(2) << solution_2 << " " << solution_1 << endl;
            }
        }
        
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
    return 0;
}