#include <iostream>
#include <string>
using namespace std;

class Animal
{
    //private:
protected:
    int age;

public:
    Animal() {}
};

class Dog : public Animal
{
public:
    Dog() {}
    void SetAge(int n)
    {
        age = n;
    }
    int GetAge()
    {
        return age;
    }
};

int main()
{
    Dog d;
    int n;
    cin >> n;
    d.SetAge(n);
    cout << d.GetAge() << endl;
    return 0;
}