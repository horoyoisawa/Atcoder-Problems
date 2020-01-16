#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> S(h+2, vector<char>(w+2));
  int black = 0;
  for(int i=0;i<h+2;i++) {
    if(i == 0 || i == h+1) for(int j=0;j<w+2;j++) S[i][j] = '#';
    else {
      for(int j=0;j<w+2;j++) {
        if(j == 0 || j == w+1) S[i][j] = '#';
        else {
          cin >> S[i][j];
          if(S[i][j] == '#') black++;
        }
      }
    }
  }

  vector<vector<int>> root(h+2, vector<int>(w+2, -1));

  root[1][1] = 1;
  
  queue<pair<int, int>> que;

  map<pair<int, int>, int> used;

  que.push(make_pair(1, 1));

  while(!que.empty()) {
    pair<int, int> p = que.front();que.pop();
    if(used[p]) continue;
    int a = root[p.first][p.second] + 1;
    if(S[p.first+1][p.second] == '.' && !used[make_pair(p.first+1, p.second)]) {
      root[p.first+1][p.second] = a;
      que.push(make_pair(p.first+1, p.second));
    }
    if(S[p.first-1][p.second] == '.' && !used[make_pair(p.first-1, p.second)]) {
      root[p.first-1][p.second] = a;
      que.push(make_pair(p.first-1, p.second));
    }
    if(S[p.first][p.second+1] == '.' && !used[make_pair(p.first, p.second+1)]) {
      root[p.first][p.second+1] = a;
      que.push(make_pair(p.first, p.second+1));
    }
    if(S[p.first][p.second-1] == '.' && !used[make_pair(p.first, p.second-1)]) {
      root[p.first][p.second-1] = a;
      que.push(make_pair(p.first, p.second-1));
    }

    used[p] = 1;
  }

  if(root[h][w] == -1) cout << -1 << endl;
  else cout << h * w - root[h][w] - black << endl;

  return 0;
}