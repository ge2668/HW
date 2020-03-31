#include<iostream>
using namespace std;

class Integer
{
    private:
        int _num;
    public:
        Integer(int num){_num = num;}
        int get_num(){return _num;}
        int gcd(Integer b);
};

int Integer::gcd(Integer b)
{
    int factor = (_num < b.get_num())? _num: b.get_num();
    while (factor)
    {
        if (_num % factor == 0 && b.get_num() % factor == 0)
        {
            return factor;
            break;
        }
        factor --;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    Integer A(a);
    Integer B(b);
    cout << A.gcd(B) << endl;
    return 0;
}