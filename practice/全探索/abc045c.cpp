//bit search

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  long long sum = 0;

  int n = s.size();
  for (int mask = 0; mask < (1 << (n - 1)); mask++) {
    long long current = 0;
    string temp = "";
  
    for (int i = 0; i < n; i++) {
      temp += s[i];

      if (mask & (1 << i) || i == n - 1) {
          current += stoll(temp);
          temp = "";
      }
    }
    sum += current;
  }

  cout << sum << endl;
}

