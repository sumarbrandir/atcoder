#include<bits/stdc++.h>
using namespace std;

bool test(vector<int> G, vector<int> h, int i) {
  for (auto gi : G) {
    if (h[gi]>=h[i]) {return false;}
  }
  return true;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> h(n);
  for (auto& hi:h) {
    cin >> hi;
  }
  
  vector<vector<int>> G(n);
  for(int i=0; i<m;i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  
  int count = 0;
  for(int i=0; i<n;i++) {
    if (G[i].size()==0) {
      count++;
    } else if (test(G[i], h, i)) {
      count++;
    }
  }
  
  cout << count;
}
