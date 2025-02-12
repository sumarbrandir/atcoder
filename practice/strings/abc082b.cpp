#include <bits/stdc++.h>
using namespace std;

bool test(string n, string m) {
  for(int i=0; i<min(n.size(), m.size()) ; i++) {
    if (n[i]<m[i]) {return true;}
    else if (n[i]>m[i]) {return false;}
  }
  if (n.size() < m.size()) {return true;}
  return false;
}

int main(){
  string n, m;
  cin >> n >> m;
  
  sort(n.begin(),n.end());
  sort(m.begin(),m.end(), greater<char>());

  if (test(n,m)) {cout << "Yes";}
  else {cout << "No";}
}
