#include <random>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    default_random_engine e(time(0));
    uniform_real_distribution<double> u(-1, 1);
    cout << u(e) << endl;
    return 0;
}