#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  
  char prev = s[0];
  vector<int> comp;
  int count = 1;
  for (int i=1;i<n;i++) {
    if (prev == s[i]) {
      count ++;
    } else {
      comp.push_back(count);
      count = 1;
      prev = s[i];
    }
  }
  if (count!=0) {comp.push_back(count);}
  
  vector<int> pos(n,0);
  int sum = 0;
  for (int i=0; i<comp.size();i++) {
    sum += comp[i];
    if (i%2==0) {
      pos[sum-1] += (comp[i]+1) / 2;
      pos[sum] += comp[i] - (comp[i]+1) / 2;
    } else {
      pos[sum - comp[i]] += (comp[i]+1) / 2;
      pos[sum - comp[i]-1] += comp[i] - (comp[i]+1) / 2;
    }
  }
  for (auto i : pos) {
    cout << i << " ";
  }
}
