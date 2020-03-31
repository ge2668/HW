#include<bits/stdc++.h>
using namespace std;

class Point
{
    private:
        double x, y;
        static int count;
    public:
        Point(int _x, int _y): x(_x), y(_y){count ++;}
        Point(){}
        ~Point(){count --}
        static int showCount();
        void addPoint();
        void showPoint(int _x, int _y);
};

int Point::count = 0;

int Point::showCount()
{
    return count;
}

void Point::addPoint(int _x, int _y)
{
    x = _x;
    y = _y;
    count ++;
}

void Point::showPoint()
{
    cout << "x = " << x << endl
         << "y = " << y << endl;
}

int main()
{
    int _x, _y;
    Point p;
    while (cin >> _x >> _y)
    {
        if (!_x && !_y) break;
        Point p(_x, _y);
    }

    cout << Point::showCount() << endl;
}