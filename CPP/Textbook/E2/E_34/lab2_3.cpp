#include<iostream>
using namespace std;

float circle(float pi, float r)
{
    float s = pi * r * r;
    return s;
}

float square(float a)
{
    float s = a * a;
    return s;
}

float rectangle(float a, float b)
{
    float s = a * b;
    return s;
}

int main()
{
    int type;
    float pi = 3.14, area = 0;

    cout << "Enter the type, 0 for circle, 1 for square, 2 for recrangle: " << endl;
    cin >> type;

    switch (type)
    {
    case 0:
    {
        float r;
        cout << "Enter the radius: ";
        cin >> r;
        area = circle(pi, r);
        cout << "The area of the circle is " << area << endl;
        break; 
    }
    case 1:
    {
        float a;
        cout << "Enter the side length: ";
        cin >> a;
        area = square(a);
        cout << "The area of the square is " << area << endl;
        break;
    }
    case 2:
    {
        float a, b;
        cout << "Enter the lengths of the sides:";
        cin >> a >> b;
        area = rectangle(a, b);
        cout << "The area of the rectangle is " << area << endl;
        break;
    }
    default: 
        {
            cout << "The number you entered is not legitimate." << endl;
            break;
        }
    }
   
    return 0;
}