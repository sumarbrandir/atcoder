//straight forward

#include <bits/stdc++.h>
using namespace std;

int main() {
  string D;
  cin >> D;

  string A;
  if (D == "N") {
    A = "S";
  } else if (D == "S") {
    A = "N";
  }else if (D == "E") {
    A = "W";
  } else if (D == "W") {
    A = "E";
  } else if (D == "NE") {
    A = "SW";
  } else if (D == "SW") {
    A = "NE";
  }else if (D == "NW") {
    A = "SE";
  } else if (D == "SE") {
    A = "NW";
  }
  
  
  cout << A << endl;
}
