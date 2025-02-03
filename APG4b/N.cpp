#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> scores(N);
  int average = 0;

  for(int i=0;i<N;i++){
    cin >> scores.at(i);
    average += scores.at(i);
  }
  average /= N;
//  cout << average << endl;
  for(int i=0;i<N;i++){
    if (average > scores.at(i)) {
      cout << (average - scores.at(i)) << endl;
    }
    else {
      cout << (scores.at(i) - average) << endl;
    }
  }  
}
