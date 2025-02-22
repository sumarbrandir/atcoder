#include <bits/stdc++.h>
using namespace std;


int main() {
  string s;
  cin >> s;
  
  for(int i=1; i<s.size(); i++) {
    if (s[i]=='A'&&s[i-1]=='W') {
      s[i]='C'; s[i-1]='A';
      if (i>1) {i -= 2;}
    }
  }
  cout << s;
}

