#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> bild(h+2, vector<char>(w+2));
  for(int i=0;i<w+2;i++) {
    bild[0][i] = '.';
    bild[h+1][i] = '.';
  }
  for(int i=1;i<h+1;i++) {
    for(int j=1;j<w+1;j++) {
      bild[i][0] = '.';
      cin >> bild[i][j];
      bild[i][w+1]='.';
    }
  }

  bool yes = true;

  for(int i=1;i<=h;i++) {
    for(int j=1;j<=w;j++) {
      if(bild[i][j] == '#') {
        if(bild[i][j-1] == '#') {
          continue;
        }
        if(bild[i][j+1] == '#') {
          continue;
        }
        if(bild[i-1][j] == '#') {
          continue;
        }
        if(bild[i+1][j] == '#') {
          continue;
        }
        yes = false;
        break;
      }
    }
    if(!yes) {
      break;
    }
  }

  if(yes) cout << "Yes" << endl;
  else cout << "No" << endl;
}