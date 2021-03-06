#include <iostream>
using namespace std;

struct Base1
{
    int x;
    Base1(int _x) : x(_x) {}
    Base1(Base1 &a)
    {
        x = a.x;
    }
};

struct Base2
{
    int x;
    Base2(int _x) : x(_x) {}
    Base2(Base2 &b)
    {
        x = b.x;
    }
};

struct Derived : public Base1, public Base2
{
    int x;
    Derived(Base1 &a, Base2 &b) : Base1(a), Base2(b)
    {
        x = a.x + b.x;
    }
};

int main()
{
    int x, y;
    cin >> x >> y;
    Base1 a(x);
    Base2 b(y);
    Derived d(a, b);
    cout << d.Base1::x << "+" << d.Base2::x << "=" << d.x << endl;
    return 0;
}