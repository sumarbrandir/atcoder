#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long k;
  cin >> n >> k;

  vector<int> A(n+1);
  for (int i=1;i<=n;i++) {
    cin >> A[i];
  }
  
  vector<int> B;
  int current = 1;
  vector<bool> visited(n+1, false);
  visited[1] = true;
  B.push_back(1);
  int start = 1;
  for (int i=1;i<n;i++) {
    current = A[current];
    if (visited[current]) {
      start = current;
      break;
    }
    visited[current] = true;
    B.push_back(current);
  }
  
  if (k < B.size()) {
    cout << B[k] << endl;
  } else {
    int cycle_start = find(B.begin(), B.end(), start) - B.begin();
    k = (k - cycle_start) % (B.size() - cycle_start) + cycle_start;
    cout << B[k] << endl;
  }
  
  
}

