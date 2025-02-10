include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> A(3);
  for (int i=0;i<3;i++){
    cin >>A[i];
  }
  bool flag = false;
  
  do {
    if (A[1]*A[2] == A[0]) {
      flag = true;
    }
  } while(next_permutation(A.begin(), A.end()));
  
  if (flag) {cout<<"Yes";}
  else {cout<<"No";}
}
