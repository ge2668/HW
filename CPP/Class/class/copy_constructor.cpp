#include<iostream>
using namespace std;

class Point
{
    public:
        Point(int xx = 0, int yy = 0){x = xx; y = yy;}
        Point(const Point &p); //copy constructor
        int getX() const{return x;}
        int getY() const{return y;}
    private:
        int x, y;
};

//copy constructor
Point::Point(const Point&p)
{
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor" << endl;
}

//形参为对象
void func1(Point p)
{
    cout << p.getX() << endl;
}


//返回值为point类对象
Point func2()
{
    Point a(1, 2); //构造对象
    return a; 
}

int main()
{
    Point a(4, 5);
    Point b(a); //用a初始化b，调用复制构造函数
    cout << b.getX() << endl;

    func1(b); //对象b作为func1的实参，形实结合时调用复制构造函数

    b = func2();
    cout << b.getX() << endl;

    return 0;
}