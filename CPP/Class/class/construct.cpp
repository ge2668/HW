#include<iostream>
using namespace std;

class Clock
{
    public:
        //外部接口
        //构造函数名与类名相同，建立对象时自动调用
        Clock(int h, int m, int s);
        Clock(); //默认构造函数
        void show_time();
    private:
        int hour, minute, second;
};

//构造函数不指定返回类型，没有return语句
Clock::Clock(int h, int m, int s): hour(h), minute(m), second(s){} //列表
//Clock::Clock(): hour(0), minute(0), second(0){} 
//委托构造函数：初始化算法相同时用于避免代码重复，使用类的其它构造函数进行初始化
Clock::Clock(): Clock(0, 0, 0){}


void Clock::show_time()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
    Clock my_clock;
    my_clock.show_time();
    return 0;
}