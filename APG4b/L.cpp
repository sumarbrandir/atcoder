#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  string op;
  int num;

  for (int i=1;i<N+1;i++) {
    cin >> op >> num;
    if (op=="+") {
      A += num;
    } else if (op=="-") {
      A -= num;
    } else if (op=="*") {
      A *= num;
    } else {
      if (num/1==0) {
        cout << "error" << endl;
        break;
      }
      A /= num;
    }
    cout << i << ":";
    cout << A << endl;
  }
}

