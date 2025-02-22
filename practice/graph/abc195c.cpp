#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[50], b[50];
bool G[50][50];
vector<bool> visited(50, false);

void dfs(int v) {
  visited[v] = true;
  for(int i=0; i<n; i++) {
    if (G[v][i] && visited[i]==false) {
      dfs(i);
    }
  }
}

int main() {
  cin >> n >> m;

  for(int i=0; i<m;i++) {
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;
    G[a[i]][b[i]] = G[b[i]][a[i]] = true;
  }
  visited[0] = true;
  int count;
  for(int i=0; i<m;i++) {
    int c = a[i]; int d = b[i];
    G[c][d] = G[d][c] = false;
    for(int j=0; j<n;j++) {
      visited[j]=false;
    }
    dfs(0);
    G[c][d] = G[d][c] = true;
    for(int j=0; j<n;j++) {
      if (!visited[j]){
        count++;
        break;
      }
    }
  }
  cout<<count;
}
