include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> p(n + 1);
    vector<int> q(n + 1);
    unordered_map<int, int> index_in_q;
    
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    
    for (int i = 1; i <= n; i++) {
        cin >> q[i];
        index_in_q[q[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        int j = index_in_q[i];
        cout << q[p[j]] << " ";
    }
    cout << endl;
}

