#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int>> dice(N);
  
  for (int i = 0; i < N; i++) {
      int K;
      cin >> K;
      dice[i].resize(K);
      for (int j = 0; j < K; j++) {
          cin >> dice[i][j];
      }
  }
  vector<unordered_map<int, int>> count(N);
  vector<int> sizes(N);

  for (int i = 0; i < N; i++) {
      sizes[i] = dice[i].size();
      for (int face : dice[i]) {
          count[i][face]++;
      }
  }

  double max_prob = 0.0;

  for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) { 
          double prob = 0.0;
          for (auto& [face, freq] : count[i]) {
              if (count[j].count(face)) {
                  prob += (double(freq) / sizes[i]) * (double(count[j][face]) / sizes[j]);
              }
          }
          max_prob = max(max_prob, prob);
      }
  }
  cout << fixed << setprecision(10) << max_prob << endl;
}
