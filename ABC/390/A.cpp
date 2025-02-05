// swap back
// isAscend defined before main()

#include <bits/stdc++.h>
using namespace std;

bool isAscend(vector<int> A) {
  for (int i=0; i<4; i++) {
    if (A[i] > A[i+1]) {
      return false;
    }
  }
  return true;
}

int main() {
  vector<int> A(5); 
  for (int i=0;i<5; i++) {
    cin >> A[i]; 
  }
  bool flag = false;
  
  for (int i=0; i<4; i++) {
    swap(A[i], A[i+1]);
    if (isAscend(A)) flag = true;
    swap(A[i], A[i+1]);
  }
  
  if (flag) cout << "Yes"; 
  else cout << "No";
}
  
 

