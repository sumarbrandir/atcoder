// detect if . exist in a rectangle of #

#include <bits/stdc++.h>
using namespace std;

int main(void){
	int h,w;
	string s[1000];
	int hmin=1000,hmax=-1,wmin=1000,wmax=-1;
	bool flag=true;
	cin>>h>>w;
	
	for(int i=0;i<h;i++){
		cin>>s[i];
		for(int j=0;j<w;j++){
			if(s[i][j]=='#'){
			  if (i<hmin) hmin=i;
			  if (i>hmax) hmax=i;
			  if (j<wmin) wmin=j;
			  if (j>wmax) wmax=j;
			}
		}
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(s[i][j]=='.'){
			  if (i >= hmin && i<=hmax && j>=wmin && j<=wmax) {flag = false;}
			}
		}
	}
	
	if (flag) cout << "Yes";
	else cout << "No";
	
}
