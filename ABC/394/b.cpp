#include <bits/stdc++.h>
using namespace std;

bool compareByLength(pair<string, int> a, pair<string, int> b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<string, int>> a(n);
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a[i] = make_pair(s, s.size());
    }
    
    sort(a.begin(), a.end(), compareByLength);
    
    for (int i = 0; i < n; i++) {
        cout << a[i].first; 
    }
}

