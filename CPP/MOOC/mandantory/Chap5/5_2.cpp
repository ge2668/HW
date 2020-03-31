#include<bits/stdc++.h>
using namespace std;

class Yuebao
{
    private:
        static double profitRate;
        double balance;
    public:
        Yuebao(int x);
        void deposit(double amount);
        void withdraw(double amount);
        void addProfit();
        double getBalance();
        static void setProfitRate(double rate);
        
};

Yuebao::Yuebao(int x): balance(x){}
double Yuebao::profitRate = 0;

void Yuebao::deposit(double amount)
{
    balance += amount;
}

void Yuebao::withdraw(double amount)
{
    balance -= amount;
}

double Yuebao::getBalance()
{
    return balance;
}

void Yuebao::addProfit()
{
    balance += balance * profitRate;
}

void Yuebao::setProfitRate(double rate)
{
    profitRate = rate;
}
  
int main()
{
    int n;
    while(cin >> n)
    {
        double rate;
        cin >> rate;
        Yuebao::setProfitRate(rate);//设定鱼额宝的利率
        Yuebao y(0); //新建鱼额宝账户，余额初始化为0
        int operation;//接受输入判断是存还是取
        double amount;//接受输入存取金额
        for (int i = 0; i < n; ++i)
        {
            y.addProfit();//加入前一天余额产生的利息
            cin >> operation >> amount;
            if (operation == 0)
                y.deposit(amount);//存入金额
            else
                y.withdraw(amount);//取出金额
        }
        cout << y.getBalance() << endl;//输出最终账户余额
    }
    return 0;
}
