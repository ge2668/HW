#include<iostream>
using namespace std;

float Convert(float TempFer)
{
    float c = 0;
    c = (TempFer - 32) * 5 / 9;
    return c;
}

int main()
{
    float temp_f;
    cin >> temp_f;
    float temp_c = Convert(temp_f);
    cout << temp_c << endl;
    return 0;
}