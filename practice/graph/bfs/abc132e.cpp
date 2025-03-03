#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> G(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
    }

    int s, t;
    cin >> s >> t;
    s--; t--;

    vector<vector<int>> dist(n, vector<int>(3, -1));
    
    queue<pair<int, int>> que;
    que.push({s, 0});
    dist[s][0] = 0;

    while (!que.empty()) {
        auto [v, step] = que.front();
        que.pop();

        for (int u : G[v]) {
            int next_step = (step + 1) % 3;
            if (dist[u][next_step] == -1) {
                dist[u][next_step] = dist[v][step] + 1;
                que.push({u, next_step});
            }
        }
    }

    int answer = dist[t][0];
    if (answer == -1) {
        cout << -1 << endl;
    } else {
        cout << answer / 3 << endl;
    }

    return 0;
}

