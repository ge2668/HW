#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle() : MaxSpeed(0), Weight(0) {}
    Vehicle(int speed, int weight) : MaxSpeed(speed), Weight(weight) {}
    void Run()
    {
        cout << "Vehicle starts running" << endl;
    }
    void Stop()
    {
        cout << "Speed approachimg zero" << endl;
    }
    int GetMaxSpeed()
    {
        return MaxSpeed;
    }
    int GetWeight()
    {
        return Weight;
    }

    int MaxSpeed, Weight;
};

class Bicycle : virtual public Vehicle
{
public:
    Bicycle(int _speed, int _weight, int _height, int _length) : Vehicle(_speed, _weight), height(_height), length(_length) {}

    int height, length;
};

class Motorcar : virtual public Vehicle
{
public:
    Motorcar(int _speed, int _weight, int _num) : Vehicle(_speed, _weight), seatNumber(_num) {}

    int seatNumber;
};

class Motorcycle : public Bicycle, public Motorcar
{
public:
    Motorcycle(int _speed, int _weight, int _height, int _length, int _num) : Vehicle(_speed, _weight), Bicycle(_speed, _weight, _height, _length), Motorcar(_speed, _weight, _num) {}
};

int main()
{
    Motorcycle m(100, 20, 1, 1, 4);
    m.Run();
    m.Stop();
    return 0;
}