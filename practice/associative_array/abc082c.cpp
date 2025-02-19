#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int,int> num;
  
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    num[a]++;
  }
  
  int count = 0;
  for(auto &[key, value] : num) {
    if (value<key) {
      count += value;
    } else if (value > key) {
      count += value - key;
    }
  }
  cout << count;
}
