#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> S(h+2, vector<char>(w+2));
  for(int i=0;i<h+2;i++) {
    if(i == 0 || i == h+1) for(int j=0;j<w+2;j++) S[i][j] = '#';
    else {
      for(int j=0;j<w+2;j++) {
        if(j == 0 || j == w+1) S[i][j] = '#';
        else {
          cin >> S[i][j];
        }
      }
    }
  }

  map<pair<int, int>, int> usedd;

  vector<int> vec(0);
 
  for(int i=1;i<=h;i++) {
    for(int j=1;j<=w;j++) {
      if(S[i][j] == '#') continue;
      vector<vector<int>> root(h+2, vector<int>(w+2, 0));
 
      root[i][j] = 0;
      
      queue<pair<int, int>> que;
    
      map<pair<int, int>, int> used;
    
      que.push(make_pair(i, j));
    
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

      int max = 0;
      pair<int, int> co;

      for(int e = 1; e <= h; e++) {
        for(int f = 1; f <= w; f++) {
          if(root[e][f] > max) {
            max = root[e][f];
            co.first = e;
            co.second = f;
          }
        }
      }

      vec.push_back(max);
    }
  }

  cout << *max_element(vec.begin(), vec.end()) << endl;
 
  return 0;
}