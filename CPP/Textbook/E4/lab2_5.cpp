#include<iostream>
using namespace std;

struct ShowTime
{
    int year, month, date, hour, minute, second;
};

int main()
{
    int year, month, date, hour, minute, second;
    cin >> year >> month >> date >> hour >> minute >> second;
    ShowTime object = {year, month, date, hour, minute, second};
    cout << year << "年" << month << "月" << date << "日" << hour << ": " << minute << ": " << second << endl;
    return 0;
}