include <bits/stdc++.h>
using namespace std;

bool notin(int i, vector<int> A) {
  for(int j=0;j<A.size();j++) {
    if (i==A[j]) {
      return false;
    }
  }
  return true;
}

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> A(m);
  for (auto& a:A) {cin>>a;}
  cout << n-m << endl;
  
  for (int i=1;i<=n; i++){
    if (notin(i, A)) {
      cout << i << " ";
    }
  }
}
