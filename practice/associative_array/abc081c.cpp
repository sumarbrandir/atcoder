#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  map<int, int> num;
  
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    num[a]++;
  }
  
  vector<int> count;
  for(auto &[key, value] : num) {
    count.push_back(value);
  }

  int c = 0;
  int unique = count.size();
  sort(count.begin(),count.end());
  for (int i=0;i<count.size() && unique > k;i++) {
    c+=count[i];
    unique--;
  }
  cout << c;
}
