// prefix array

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, q;
vector<ll> A; 

int main() {
  cin >> n >> q;
  A.resize(n);
  
  for (int i = 0; i < n; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
  vector<ll> prefix(n+1, 0);
  for (int i = 0; i < n; i++) {
      prefix[i+1] = prefix[i] + A[i];
  }
  while (q--) {
    int b;
    cin >> b;
    if (b == 1) {
        cout << 1 << "\n";
        continue;
    }

    // find first index >= b
    int idx = lower_bound(A.begin(), A.end(), b) - A.begin();

    ll ans = prefix[idx];
    ans += 1LL * (n - idx) * (b - 1);

    if (idx < n) cout << ans + 1 << "\n";
    else cout << -1 << "\n";
  }	
		
		
		
// 	for (int i = 0; i < q; i++) {
// 		cin >> b;
// 		cout << solve(b) << endl;
// 	}
}
