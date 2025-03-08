#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> ng;
  for(int i=0;i<3;i++) {
    int x;
    cin >> x;
    ng.insert(x);
  }
  
  vector<pair<bool, int>> dp(n+1, {false,INT_MAX});
  dp[0]={true,0};
  for(int i=1; i<=n; i++) {
    if (ng.count(i)) continue;
    if(i>=1 && dp[i-1].first) {dp[i].first=true; dp[i].second=min(dp[i].second,dp[i-1].second+1);}
    if(i>=2 && dp[i-2].first) {dp[i].first=true; dp[i].second=min(dp[i].second,dp[i-2].second+1);}
    if(i>=3 && dp[i-3].first) {dp[i].first=true; dp[i].second=min(dp[i].second,dp[i-3].second+1);}
  }
  if(dp[n].first && dp[n].second<=100) cout<<"YES";
  else cout<<"NO";
}

