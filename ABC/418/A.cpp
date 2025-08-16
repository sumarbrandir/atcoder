#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    
    if (n<3) {
      cout << "No";
    } else if (s.substr(s.size()-3,3) == "tea") {
        cout << "Yes";
    } else {
      cout << "No";
    }
}
