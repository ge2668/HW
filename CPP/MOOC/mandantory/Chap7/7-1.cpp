#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string userName;

public:
    Account() {}
    Account(string _name) : userName(_name) {}
    void PrintUserName()
    {
        cout << userName << endl;
    }
};

class CreditAccount : public Account
{
private:
    int credit;

public:
    CreditAccount(string _name, int _credit) : Account(_name), credit(_credit) {}
    void PrintInfo()
    {
        PrintUserName();
        cout << credit << endl;
    }
};

int main()
{
    CreditAccount a("I Love CPP", 10000);
    a.PrintInfo();
    return 0;
}