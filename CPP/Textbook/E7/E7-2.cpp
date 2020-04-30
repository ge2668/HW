#include <iostream>
using namespace std;

class BaseClass
{
public:
    BaseClass() : number(0)
    {
        cout << "BaseClass default constructed called" << endl;
    }
    BaseClass(int _n) : number(_n)
    {
        cout << "BaseClass constructor called" << endl;
    }
    ~BaseClass()
    {
        cout << "BaseClass destructor called" << endl;
    }

    int number;
};

class DerivedClass : public BaseClass
{
public:
    DerivedClass(int x) : BaseClass(x)
    {
        cout << "DerivedClass constructor called" << endl;
    }
    DerivedClass()
    {
        cout << "DerivedClass default constructor called" << endl;
    }
    ~DerivedClass()
    {
        cout << "DerivedClass destructor called" << endl;
    }
};

int main()
{
    int x;
    cin >> x;
    DerivedClass d(x);
    return 0;
}