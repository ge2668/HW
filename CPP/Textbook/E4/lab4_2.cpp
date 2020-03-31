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


class RAM
{
    public:
        RAM(int _r): ram(_r){cout << "Call RAM constructor" << endl;}
        RAM(): ram(0){cout << "Call RAM default constructor" << endl;}
        RAM(const RAM &r): ram(r.ram) {cout << "Call RAM copy constructor" << endl;}
        ~RAM(){cout << "Cal RAM deconstructor" << endl;}
        void run(){cout << "RAM starts running." << endl;}
        void stop(){cout << "RAM stops running." << endl;}
        
    private:
        int ram;
};

class CDROM
{
    public:
        CDROM(int _cd): cdrom(_cd) {cout << "Call CDROM constructor" << endl;}
        CDROM(): cdrom(0) {cout << "Call CDROM default constructor" << endl;}
        CDROM(const CDROM &p): cdrom(p.cdrom) {cout << "Call CDROM copy constructor" << endl;}
        ~CDROM() {cout << "Call CDROM deconstructor" << endl;}
        void run(){cout << "CDROM starts running." << endl;}
        void stop(){cout << "CDROM stops running." << endl;}

    private:
        int cdrom;
};

class Computer
{
    public:
        Computer(CPU c, RAM r, CDROM cd);
        Computer();
        Computer(const Computer &p);
        ~Computer() {cout << "Call Computer deconstructor" << endl;}
        void run(){cout << "Computer starts running." << endl;}
        void stop(){cout << "Computer stops running." << endl;}
        int show_cpu_freq() {cout << "The frequency of the CPU: " << cpu.get_freq() << " Hz" << endl;}

    private:
        CPU cpu;
        RAM ram;
        CDROM cdrom;
};

Computer::Computer(CPU c, RAM r, CDROM cd): cpu(c), ram(r), cdrom(cd)
{
    cout << "Call Computer constructor" << endl;
}

Computer::Computer():cpu(P1, 0, 0), ram(0), cdrom(0)
{
    cout << "Call Computer default constructor" << endl;
}

Computer::Computer(const Computer &c): cpu(c.cpu), ram(c.ram), cdrom(c.cdrom)
{
    cout << "Call Computer default constructor" << endl;
}

int main()
{
    CPU cpu_obj(P6, 250, 2.6);
    RAM ram_obj(2);
    CDROM cd_obj(2);

    cout << "Declare Computer object_1" << endl;
    Computer pc1;
    pc1.show_cpu_freq();

    cout << "Declare Computer object_2" << endl;
    Computer pc2(cpu_obj, ram_obj, cd_obj);
    pc2.show_cpu_freq();

    return 0;
}