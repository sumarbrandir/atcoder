#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> A(n);
  for (auto& a:A) {cin>>a;}
  sort(A.begin(), A.end());
  
  int height = INT_MAX;
  for(int i=0; i<n-k+1;i++) {
    int diff = A[i+k-1] - A[i];
    if (diff<height) {height=diff;}
  }
  cout << height << endl;
}
