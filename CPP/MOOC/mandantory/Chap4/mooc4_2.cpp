#include<iostream>
using namespace std;

class Integer
{
    private:
        int _num;
    public:
        Integer(int num){_num = num;}
        int reversed();
};

int Integer::reversed()
{
    int reverse = 0;
    while (_num)
    {
        int digit = _num % 10;
        reverse = 10 * reverse + digit;
        _num /= 10;
    }
    return reverse;
}

int main()
{
    int n;
    cin >> n;
    Integer integer(n);
    cout << integer.reversed() << endl;
    return 0;
}