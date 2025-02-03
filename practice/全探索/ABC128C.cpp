#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;

	vector<vector<int>> vec(m);
	
	for (int i = 0; i < m; i++) {
		int k; cin >> k;
		vec[i].resize(k); // !!
		for (int j = 0; j < k; j++) {
			cin >> vec[i][j];
		}
	}

	vector<int> p(m);
	for (int i = 0; i < m; i++) cin >> p[i];

	int ans = 0;
	for (int i = 0; i < (1 << n); i++) {
		bool ok = true;
		for (int j = 0; j < m; j++) {
			int c = 0;
			for (int id : vec[j]) {
				if (i & (1<<(id-1))) {
					c++;
				}
			}
			c %= 2;
			if (c != p[j]) {
				ok = false;
			}
		}
		if (ok) {
			ans++;
		}
	}

	cout << ans << endl;
}
