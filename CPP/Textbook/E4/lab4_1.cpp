#include<iostream>
using namespace std;

enum CPU_Rank {P1 = 1, P2, P3, P4, P5, P6, P7};

class CPU
{
    public:
        CPU(CPU_Rank _r, int _f, float _v): rank(_r), frequency(_f), voltage(_v)
        {
            cout << "Call CPU constructor" << endl;
        }
        CPU(const CPU &cpu);
        CPU(): rank(P1), frequency(0), voltage(0) {cout << "Call CPU default constructor" << endl;}
        ~CPU() {cout << "Call CPU deconstructor" << endl;}
        void run(){cout << "CPU starts running." << endl;}
        void stop(){cout << "CPU stops running." << endl;}
        int get_freq() {return frequency;}

    private:
        CPU_Rank rank;
        int frequency;
        float voltage;
};

CPU::CPU(const CPU &cpu):rank(cpu.rank), frequency(cpu.frequency), voltage(cpu.voltage)
{
    cout << "Call CPU copy constructor" << endl;
}

int main()
{
    CPU advanced(P7, 400, 3);
    advanced.run();
    advanced.stop();

    return 0;
}