#include<bits/stdc++.h>
using namespace std;

bool G[8][8];

int test(int s, int n, vector<bool> visited) {
  bool flag = true;
  for(int i=0;i<n;i++) {
    if (visited[i]==false) {flag=false;}
  }
  int count = 0;
  if (flag) {return 1;}

  for(int i=0; i<n;i++) {
    if (G[s][i] && !visited[i]) {
      visited[i] = true;
      count += test(i, n, visited);
      visited[i] = false;
    }
  }
  return count;
}

int main() {
  int n, m;
  cin >> n >> m;

  for(int i=0; i<m;i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    G[a][b] = G[b][a] = true;
  }
  
  vector<bool> visited(n);
  for(int i=0; i<n;i++) {
    visited[i] = false;
  }
  visited[0] = true;
  int count = test(0,n,visited);
  cout << count;
}
