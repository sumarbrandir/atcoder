#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<bool> f(100005);
  for(int i=2;i<100001;i++) {
    if(!f[i]) {
      for(int j=i+i; j<100001; j+=i) {
        f[j] = true;
      }
    }
  }
  
  vector<int> c(100005, 0);
  for(int i=3;i<100001;i++) {
    if (!f[i] && !f[(i+1)/2]) {
      c[i]++;
    }
  }
  
  for(int i=1;i<100001;i++) {
    c[i] = c[i] + c[i-1];
  }
  
  int q;
  cin >> q;
  for (int i=0; i<q; i++) {
    int l, r;
    cin >> l >> r;
    cout << c[r]-c[l-1] << endl;
  }
}
