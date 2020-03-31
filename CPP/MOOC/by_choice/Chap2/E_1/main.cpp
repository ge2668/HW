#include<iostream>
using namespace std;

int main()
{
    int n = 0, part = 1, entry = 0;
    cin >> n; //#integers in the sequence
    cin >> entry;
    int initial = entry;
    for (int i = 1; i < n; i++)
    {
        cin >> entry;
        part += (entry == initial)? 0: 1;
        initial = entry;
    }
    cout << part <<endl;
    return 0;

}