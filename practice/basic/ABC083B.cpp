// counting digits using / and %

#include <bits/stdc++.h>
using namespace std;

bool digit(int n,int a,int b){
  int sum = 0;
  while (n>0){
    sum += n%10;
    n = n/10;
  }
  return (sum>=a && sum<=b);
}

int main(void){
	int n, a, b;
	cin>>n>>a>>b;
	int sum = 0;
	
	for (int i=1;i<=n;i++){
	  if(digit(i,a,b)) {sum += i;};
	}
	cout << sum;
}
