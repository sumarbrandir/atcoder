#include<bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  vector<int> a(q+1);
  for (int i=1; i<=q; i++) {
    cin >> a[i];
  }
  
  vector<int> sum(q+1,0);
  for (int i=1; i<=q; i++) {
    sum[i]=sum[i-1]+a[i];
  }
  sort(sum.begin(), sum.end());
  // for (int i=0; i<=q; i++) {
  //   cout<<sum[i];
  // }
  
  int count=0;
  for (int i=0; i<=q; i++) {
    int n=0;
    for(int j=i+1; j<=q;j++) {
      if (sum[i]!=sum[j]) break;
      n++;
      i=j;
    }
    count+=n*(n+1)/2;
  }
  cout<<count;
}
