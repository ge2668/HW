#include<bits/stdc++.h>
using namespace std;

class Line;
class Point
{
    private:
        int x, y;
    public:
        Point(int _x, int _y): x(_x), y(_y){}
        friend double dist(Line l, Point p); //友元函数非成员函数
};

class Line
{
    private:
        int a, b, c;
    public:
        Line(int _a, int _b, int _c): a(_a), b(_b), c(_c){};
        friend double dist(Line l, Point p);
};

double dist(Line l, Point p)
{
    return abs((l.a * p.x +l. b * p.y + l.c) / sqrt(l.a * l.a + l.b * l.b));
}

int main()
{
    int X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    Point point(X, Y);
    Line line(A, B, C);
    cout << dist(line, point) << endl;
    return 0;
}