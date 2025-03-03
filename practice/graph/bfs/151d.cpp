#include<bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;
  
  vector<string> s(h);
  for (auto& si : s) {
    cin >> si;
  }
  
  vector<int> dx = {1, 0, -1, 0}; vector<int> dy = {0, 1, 0, -1};
  
  int count = 0;
  for(int i=0; i<h; i++) {
    for(int j=0; j<w; j++) {
      if (s[i][j] == '#') continue;
      queue<pair<int,int>> que;
      vector<vector<int>> dist(h, vector<int>(w, -1));
      
      que.push({i,j});
      dist[i][j]=0;
      while (!que.empty()) {
        int x=que.front().first; int y=que.front().second;
        que.pop();
        
        for (int dir = 0; dir < 4; dir++) {
          int x2 = x + dx[dir]; int y2 = y + dy[dir];
          if (x2<0 || x2>=h || y2<0 || y2>=w) continue;
          if (s[x2][y2]=='#') continue;
          if (dist[x2][y2]!=-1) continue;
          
          que.push({x2,y2});
          dist[x2][y2] = dist[x][y]+1;
        }
      }
      for (int a = 0; a < h; a++) {
        for (int b = 0; b < w; b++) {
          count = max(count, dist[a][b]);
        }
      }
    }
  }
  
  cout << count;
  
}
