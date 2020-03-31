#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, int> test;
    test['A'] = 1; 
    cout << test['A'];
    return 0;
}