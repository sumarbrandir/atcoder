#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> C(h);
  for (auto &c : C) {
    cin >> c;
  }

  vector<string> C2(2*h);
  for (int i=0; i<2*h; i++) {
    C2[i] = C[(i)/2];
  }
  
  for (auto c2 : C2) {
    cout << c2 << endl;
  }
}
