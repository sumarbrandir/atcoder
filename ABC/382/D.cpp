#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a = 1;		// wiggle room
  for(int i=0;i<n;i++) {
    a += 10*i;
  }
  a = m - a;

  for (i=1;i<a-1;i++) {
    cout << i;
    for (j=1;i<n,j++) {
      cout << i + j*10;
    }
  }
 


}
