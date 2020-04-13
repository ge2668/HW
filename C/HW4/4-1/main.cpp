// 我确认本程序完全由本人独立完成 
// 姓名：葛依然 
// 学号：2019012668
// 时间：2020年3月11日 
#include<iostream>
using namespace std;

int main()
{
   int n = 0;
   const char space = ' ', steroid = '*';
   cin >> n;
   int all = 2 * n -1;
   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= all; j++)
       {
           char output = ( n - i < j && j < n + i)? steroid: space;
           cout << output;
       }
       cout << "\n";
   }
   return 0;
}
