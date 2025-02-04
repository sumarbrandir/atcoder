//instead of simulating pigeons in all nests, keep track of (1) position of each pigeon, (2) #of pigeons in each nest, (3) # of nests with count>2
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> pos(N+1);
  vector<int> cnt(N+1);
  for (int i=1;i<=N;i++) {
    pos[i] = i;
    cnt[i] = 1;
  }
  int ans = 0;
  
  for (int i=0; i<Q; i++) {
    int a;
    cin >> a;
    if (a==1) {
      int b, c;
      cin >> b >> c;
      if (cnt[pos[b]] == 2) {
        ans--;
      }

      cnt[pos[b]] = cnt[pos[b]] - 1;
      cnt[c] = cnt[c] + 1;
      pos[b] = c;
      
      if (cnt[c] == 2) {
        ans++;
      }
    } else {
      cout << ans << endl;
    }
  }
}
  
