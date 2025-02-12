#include <bits/stdc++.h>
using namespace std;

bool same(string n, string m) {
  
  if (n==m) {return true;}
  
  for (int i = 0; i < n.size()-1; i++) {
    swap(n[i],n[i+1]);
    if (n==m) {return true;}
    swap(n[i],n[i+1]);
    
  }
  return false;
  
}

int main(){
  string n, m;
  cin >> n >> m;
  if (same(n,m)) {cout << "Yes";}
  else {cout << "No";}
}
