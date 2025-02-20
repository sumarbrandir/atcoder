#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> num(n);
  
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    num[i]=a;
  }
  
  vector<int> h;
  for (int i=0; i<n; i++) {
    int count=0;
    for (int j=i+1; j<n && num[i]==num[j]; j++) {
      count++;
    }
    h.push_back(num[i]);
    i += count;
  }
  
  int count = 0;
  int flag = 0;
  int prev = h[0];
  int low = 0;
  for (auto hi : h) {
    if (flag == 0 && hi < prev) {
      flag = 1;
      count += prev - low;
    } else if (flag == 1 && hi > prev) {
      low = prev;
      flag = 0;
    }
    prev = hi;
    // cout << hi << endl;
  }
  if (flag == 0) {
    count += prev - low;
  }
  cout << count;
}
