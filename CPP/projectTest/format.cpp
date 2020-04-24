#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setiosflags(ios::left) << setw(12) << "Transaction ID"
         << "\t"
         << "UTXO value" << endl;
    cout << setiosflags(ios::left) << setw(12) << 1 << "\t" << 5 << endl;
    return 0;
}