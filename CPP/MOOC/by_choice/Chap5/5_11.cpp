#include<bits/stdc++.h>
using namespace std;

class Profile
{
    public:
        Profile(string _id, string _name, int _chinese, int _math, int _english);
        static void avg(int x);
    private:
        string id, name;
        int chinese, math, english;
        static int sumC, sumM, sumE;
};

float Profile::sumC = 0, Profile::sumM = 0, Profile::sumE = 0;

Profile::Profile(string _id, string _name, int _chinese, int _math, int _english): id(_id), name(_name), chinese(_chinese), math(_math), english(_english)
{
    sumC += chinese;
    sumM += math;
    sumE += english;
}

void Profile::avg(int x)
{
    int avgC, avgM,avgE;
    avgC = sumC / x;
    avgM = sumM / x;
    avgE = sumE / x;
    cout << "语文平均分：" << avgC << endl
         << "数学平均分：" << avgM << endl
         << "英语平均分：" << avgE << endl;
}

int main()
{
    int x, y;
    string ID, NAME;
    int Chinese, Math, English;
    cin >> x;
    cout 
    y = x;
    while (y)
    {
        cin >> ID  >> NAME >> Chinese >> Math >> English;
        cout << endl;
        Profile p(ID, NAME, Chinese, Math, English);
        y --;
    }
    Profile::avg(x);
    return 0;
}