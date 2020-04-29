#include <iostream>
#include <string>
using namespace std;

class Base1
{
public:
    Base1(int x)
    {
        cout << "Base1 constructor called " << x << endl;
    }
    ~Base1()
    {
        cout << "Base1 destructor called " << endl;
    }
};

class Base2
{
public:
    Base2(int x)
    {
        cout << "Base2 constructor called " << x << endl;
    }
    ~Base2()
    {
        cout << "Base2 destructor called" << endl;
    }
};

class Base3
{
public:
    Base3(int x)
    {
        cout << "Base3 constructor called " << x << endl;
    }
    ~Base3()
    {
        cout << "Base3 destructor called" << endl;
    }
};

class Derived : public Base2, public Base1, public Base3
{
public:
    Derived(int x1, int x2, int x3, int x4) : Base1(x2), Base2(x3), Base3(x4)
    {
        cout << "Derived constructor called " << x1 << endl;
    }
    ~Derived()
    {
        cout << "Derived destructor called" << endl;
    }
};

int main()
{
    int x[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }

    Derived d(x[0], x[1], x[2], x[3]);
    return 0;
}