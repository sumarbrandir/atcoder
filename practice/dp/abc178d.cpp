#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int s;
    cin >> s;

    vector<int> dp(s + 1, 0);
    dp[0] = 1;

    for (int i = 3; i <= s; i++) {
        for (int j = 3; j <= i; j++) {
          dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }

    cout << dp[s] << endl;
}

