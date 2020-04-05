//#include"rsa.h"
//#include"bigInt.h"
#include <iostream>
#include <cmath>
using namespace std;

//Input1: an integer to be tested
//Input2: a parameter which determines the accuracy
int main()
//bool RSA::IsPrime(const BigInt &num, const unsigned int k)
{
    long long int num;
    unsigned int k;
    cin >> num >> k;
    //if (num == BigInt One("1"))
    if (num == 1)
        return false;
    //else if (num == BigInt Two("2"))
    else if (num == 2)
        return true;
    else
    {
        //BigInt numMinus = num - 1, d, a;
        long long int numMinus = num - 1, a;
        long long int d = numMinus;
        int r = 0;
        //write num-1 as 2^r * d
        while (d % 2 == 0)
        {
            r++;
            d /= 2;
        }
        cout << d;
        //test if there exists a number a such that a^d mod num != 1
        //and a^(2^j*d) mod num != -1
        for (int i = 0; i < k; i++)
        {
            //a = CreateRandomNum(num); //create a random number between 1 and num
            cin >> a;
            //test a^d mod num
            //BigInt reMod = PowMod(a, d, num);
            long long int reMod = (int)pow(a, d) % num;
            //if (reMod == BigInt One("1")) //probably prime
            if (reMod == 1)
                continue;

            //test a^(2^j*d) mod num for 0 <= j <= r-1
            for (int j = 0; j < r - 1; j++)
            {
                if (reMod != numMinus) //composite
                    cout << "false";
                //reMod = PowMod(reMod, 2, num);
                reMod = (int)pow(reMod, 2) % num;
            }
        }
        cout << "true";
    }
}