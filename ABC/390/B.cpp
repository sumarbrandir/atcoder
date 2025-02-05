// convert quotients into products
// long long instead of int (2*10^9)
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  for(int i=0;i<N;i++) cin>>A[i];
  
  bool flag = true;
  if (A.size() > 2) {
    for (int i=0;i<A.size()-2;i++){
      if (A[i+1]*A[i+1] != A[i]*A[i+2]) {
        flag = false;
        break;
      }
    }
  }
  if (flag) cout<<"Yes";
  else cout<<"No";
  
}
  

