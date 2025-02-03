#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;

	vector<vector<pair<int,int>>> vec(n);
	
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		vec[i].resize(a); // !!
		for (int j = 0; j < a; j++) {
		  pair<int,int> Pair;
			cin >> Pair.first >> Pair.second;
			vec[i][j] = Pair;
		}
	}

	int ans = 0;
	for (int bit = 0; bit < (1 << n); bit++) {
		bool ok = true;

		for (int j = 0; j < n; j++){
		  if ((bit & (1<<j)) == 0) continue;
	    for (pair<int,int> one:vec[j]){
	      int x = one.first - 1;
        int y = one.second;
	      if ((y == 1) && ((bit & (1<<x)) == 0)) {
	        ok = false;
	      } else if ((y == 0) && ((bit & (1<<x)) != 0)) {
	        ok = false;
	      }
	    }
		}
		if (ok) {
  		ans = max(ans, __builtin_popcount(bit));
  	}
	}

	cout << ans << endl;
}
