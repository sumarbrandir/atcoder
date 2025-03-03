#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for(int i = 1; i <= n; i++)
    {
        dp[i] = min(dp[i], dp[i - 1] + 1);
        
        int m1 = 6;
        while(i >= m1)
        {
            dp[i] = min(dp[i], dp[i - m1] + 1);
            m1 *= 6;
        }

        int m2 = 9;
        while(i >= m2)
        {
            dp[i] = min(dp[i], dp[i - m2] + 1);
            m2 *= 9;
        }
    }

    cout << dp[n] << "\n";

    return 0;
}
