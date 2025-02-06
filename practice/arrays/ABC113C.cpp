// sorting array of pairs
#include <bits/stdc++.h>
using namespace std;

int countDigit(int n) {
  if (n/10 == 0)
    return 1;
  return 1 + countDigit(n / 10);
}

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<pair<int,int>>> p(n);
  for(int i=0;i<m;i++) {
    int pi, hi;
    cin >> pi >> hi;
    pair<int,int> city = make_pair (i+1,hi);
    p[pi-1].push_back(city);
  }
  
  vector<pair<int,int>> I(m);
  for(int i=0;i<n;i++) {
    sort(p[i].begin(), p[i].end(), [](pair<int, int> a, pair<int, int> b) {
      return a.second < b.second;
    });
    for (int j=0; j<p[i].size(); j++) {
      int a=p[i][j].first; int b=p[i][j].second;
      I[a-1] = make_pair(i+1, j+1);
    }
  }
  for (int i=0;i<m;i++) {
    int a=I[i].first; int b=I[i].second;
    cout << string(6-countDigit(a), '0') << a <<string(6-countDigit(b), '0')<< b << endl;
  }

}
