#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee
{
public:
    Employee(string _name, string _address, string _city, string _code);
    Employee(){};
    void changeName(string _name);
    void display();

private:
    string name;
    string address;
    string city;
    string code;
};

Employee::Employee(string _name, string _address, string _city, string _code) : name(_name), address(_address), city(_city), code(_code)
{
}

void Employee::changeName(string _name)
{
    name = _name;
}

void Employee::display()
{
    cout << "Name: " << name << endl
         << "Address: " << address << endl
         << "City: " << city << endl
         << "Code: " << code << endl;
}

int main()
{
    Employee profile[5];
    string _name, _address, _city, _code;
    for (int i = 0; i < 5; i++)
    {
        cin >> _name >> _address >> _city >> _code;
        Employee a(_name, _address, _city, _code);
        profile[i] = a;
    }

    return 0;
}
