    #include<bits/stdc++.h>
    using namespace std;

    int solution(int n)
    {
        int ans, add = 1, start = 9;
        if (n == 1) ans = 10;
        else
        {
            for (int i = 1; i <= n; i ++)
            {
                add *= start;
                if (!(i == 1)) start --;
            }
            ans = add + solution(n-1);
        }
        return ans;
    }

    int main()
    {
        int n;
        cin >> n;
        cout << solution(n) << endl;
        return 0;
    }