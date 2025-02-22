#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  string output;
  
  for (int i=0; i<s.size(); i++) {
    if (s[i] == '2') {output+='2';}
  }
  
  cout << output;
}

