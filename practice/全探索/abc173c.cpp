//bit search

#include<bits/stdc++.h>
using namespace std;

int h, w, k;
vector<vector<char>> c;

int main() {
  cin >> h >> w >> k;
  c.resize(h);
  for(int i=0;i<h;i++) {
    c[i].resize(w);
    for(int j=0;j<w;j++){
      cin>>c[i][j];
    }
  }
  
  int count = 0;
  for (int maskR = 0; maskR < (1 << h); maskR++) {
    for (int maskC = 0; maskC < (1 << w); maskC++) {
      int black = 0;
      for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
          if ((maskR & (1<<i)) && ((maskC) & (1<<j))  && c[i][j] == '#') {
            black++;
          }
      }
    }
      if (black == k) {
        count++;
      }
    }
  }
  cout<<count;
}

