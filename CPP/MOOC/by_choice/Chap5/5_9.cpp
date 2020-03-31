#include<bits/stdc++.h>
using namespace std;

class Date;

class Time
{
    private:
        int hour, minute, second;
    public:
        Time(int _hour, int _minute, int _second): hour(_hour), minute(_minute), second(_second){}
        void display(Date &p);
};

class Date
{
    friend class Time;
    private:
        int year, month, day;
    public:
        Date(int _year, int _month, int _day): year(_year), month(_month), day(_day){}

};

void Time::display(Date &p)
{
    cout << p.year << "/" << p.month << "/" << p.day << endl
         << hour << ":" << minute << ":" << second << endl;
}

int main()
{
    int Year, Month, Day, Hour, Minute, Second;
    cin >> Year >> Month >> Day;
    cin >> Hour >> Minute >> Second;
    Date d(Year, Month, Day);
    Time t(Hour, Minute, Second);
    t.display(d);
    return 0;
}