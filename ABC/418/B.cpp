#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  double count = 0.0;
  int size = s.size();
  for (int i = 0; i < size-2; i++) {
    if (s[i] != 't') continue;
    for (int j=i+2; j < size; j++) {
      if (s[j] == 't') {
        int cnt=0;
        for(int k = i; k <= j; k++)
            {
                if(s[k] == 't')
                {
                    cnt++;
                }
            }
        count = max (count, (double)(cnt-2)/ (double)(j-i-1));
      }
    }
  }
  cout << fixed << setprecision(9) << count ;
}
