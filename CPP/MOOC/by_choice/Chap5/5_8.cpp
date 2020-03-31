#include<bits/stdc++.h>
using namespace std;

class Distance;

class Point
{
    friend class Distance;
    private:
        float x, y;
    public:
        Point(float _x, float _y): x(_x), y(_y){}
};

class Distance
{
    public:
        float Dist(Point &p, Point &q);
};

float Distance::Dist(Point &p, Point &q)
{
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point p1(x1, y1);
    Point p2(x2, y2);
    Distance d;
    cout << fixed << setprecision(2) << d.Dist(p1, p2) << endl;
    return 0;
}