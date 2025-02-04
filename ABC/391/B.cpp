// seek grid
#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, N;
  cin >> N >> M;
  vector<vector<char>> sm(M, vector<char>(M));
  vector<vector<char>> sn(N, vector<char>(N));
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      cin >> sn[i][j];
    }
  }
  for (int i=0;i<M;i++) {
    for (int j=0;j<M;j++) {
      cin >> sm[i][j];
    }
  }
  
  for (int i=0; i <= N-M; i++) {
    for (int j=0; j <= N-M; j++) {
      bool flag = true;
      for (int a=0; a<M; a++) {
        for (int b=0; b<M; b++) {
          if (sn[i+a][j+b] != sm[a][b]) {
            flag = false;
          }
        }
      }
      if (flag) {
        cout << i+1 << " " << j+1 << endl;
      }
    }
  }

}
