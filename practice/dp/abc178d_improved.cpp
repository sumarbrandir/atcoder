#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int s;
    cin >> s;

    vector<int> dp(s + 1, 0);
    dp[0] = 1;

    int prefix_sum = 0;

    for (int i = 1; i <= s; i++) {
        if (i >= 3) {
            prefix_sum = (prefix_sum + dp[i - 3]) % MOD;
        }
        dp[i] = prefix_sum;
    }

    cout << dp[s] << endl;
    return 0;
}

