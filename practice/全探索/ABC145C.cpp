#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<pair<int,int>> vec(n);
  vector<int> p(n);
  for(int i=0;i<n;i++){
    pair<int,int> a;
    cin >> a.first >> a.second;
    vec[i] = a;
    p[i] = i;
  }
  
  double d = 0;
  do {
    for (int i = 0; i < n-1; i++){ 
      d += sqrt(pow((vec[p[i]].first-vec[p[i+1]].first),2) + pow((vec[p[i]].second-vec[p[i+1]].second),2));
    }
  } while(next_permutation(p.begin(), p.end()));
  int count = 1;
  for(int i=2;i<=n;i++) {
    count *= i;
  }
  cout << fixed << setprecision(10) << d/count << endl;
}
