#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  cin >> N;
  vector<pair<int,int> > v(N);

  for (int i=0;i<N;i++) {
    int a,b;
    cin >> a >> b;
    pair<int,int> p=make_pair(b,a);
    v.at(i)=p;
  }
  
  sort(v.begin(), v.end());

  for (int i = 0; i < N; i++) {
    cout << v.at(i).second << " " << v.at(i).first << endl;
  }
}
