#include <bits/stdc++.h>
using namespace std;

const int K = 200010;

int main() {
//  ios::sync_with_stdio(false);
//  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> id(K,-1);
  
  int r = K;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    while (r>=a){
      id[r-1] = i+1;
      r--;
    }
  }
  for(int i=0;i<m;i++){
    int b;
    cin >> b;
    cout << id[b-1] << endl;
    // cout << id[i] << endl;
  }
}
