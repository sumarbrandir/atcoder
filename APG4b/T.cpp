#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)

  vector<char> results(N*N,'-');
  for (int i = 0; i<M;i++) {
    int a = A.at(i);
    int b = B.at(i);
    results.at((a-1)*N+b-1) = 'o';
    results.at((b-1)*N+a-1) = 'x';
  }
  for (int i = 0; i<N;i++) {
    for (int j=0;j<N;j++) {
      cout << results.at(i*N+j);
      if (j==N-1) cout<<endl;
      else cout<<" ";
    }
  }
}

