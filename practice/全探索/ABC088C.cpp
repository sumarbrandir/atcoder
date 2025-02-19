#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> a(3, vector<int>(3));
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  bool flag = true;
  
  int b1 = a[0][0];
  int b2 = a[0][1];
  int b3 = a[0][2];
  int a1=0;
  int a2 = a[1][0] - b1;
  int a3 = a[2][0] - b1;
  if (a2+b2!=a[1][1] || a2+b3!=a[1][2] || a3+b2!=a[2][1] || a3+b3!=a[2][2]) {
    flag = false;
  }
  

  if (flag) {cout << "Yes";}
  else {cout << "No";}
  return 0;
}
