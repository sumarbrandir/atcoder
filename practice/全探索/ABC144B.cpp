#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool flag = false;
  for (int i=1; i<=9; i++) {
    for (int j=1; j<=9; j++) {
      if (n == i*j) {
        flag = true;
        break;
      }
    }
    if(flag){break;}
  }
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
