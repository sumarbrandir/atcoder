#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int water = 0;
  int T1, V, T2;
  T1=0;
  for (int i=0;i<N;i++) {
    cin >> T2 >> V;
    if (i != 0)
      water = water - T2 + T1;
    if (water < 0) {
      water=0;
    }
    water += V;
    swap(T1,T2);
  }
  
  cout << water <<endl;
}



