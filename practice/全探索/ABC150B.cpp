#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,x,y;
  cin >> a >> b >> c >> x >> y;
  
  int cost = INT_MAX;
  for (int i=0;i<100000;i++) {
    // current = i*2*c + a*(max(x-i,0)) + b*(max(y-i,0));
    // if (current<cost) {
    //   cost = current;
    // }
    int current = i * 2 * c 
      + a * max(x - i, 0) 
      + b * max(y - i, 0);
    cost = min(cost, current);
  }
  cout << cost << endl;
}
