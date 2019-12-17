#include <bits/stdc++.h>
using namespace std;
int main() {
  int H, W;
  cin >> H >> W;
  vector<string> field(H);
  for(int i=0;i<H;i++) {
    cin >> field[i];
  }

  vector<vector<int> > bomb(H+2, vector<int>(W+2));

  for(int i=0;i<H;i++) {
    for(int j=0;j<W;j++) {
      if(field[i][j] == '#') {
        bomb[i][j]++;
        bomb[i][j+1]++;
        bomb[i][j+2]++;
        bomb[i+1][j]++;
        bomb[i+1][j+2]++;
        bomb[i+2][j]++;
        bomb[i+2][j+1]++;
        bomb[i+2][j+2]++;
      }
    }
  }

  for(int i=0;i<H;i++) {
    for(int j=0;j<W;j++) {
      if(field[i][j] == '.') {
        cout << bomb[i+1][j+1];
      } else {
        cout << '#';
      }
    }
    cout << endl;
  }
}