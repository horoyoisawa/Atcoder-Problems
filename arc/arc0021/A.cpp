#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> teil(4, vector<int>(4));

  for(int i=0;i<4;i++) {
    for(int j=0;j<4;j++) {
      cin >> teil[i][j];
    }
  }

  bool gameover = true;

  for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
      if(teil[i][j] == teil[i][j+1]) {
        gameover = false;
        break;
      }
      if(teil[i][j] == teil[i+1][j]) {
        gameover = false;
        break;
      }
    }
  }

  for(int i=0;i<3;i++) {
    if(teil[i][3] == teil[i+1][3]) {
      gameover = false;
      break;
    }
    if(teil[3][i] == teil[3][i+1]) {
      gameover = false;
      break;
    }
  }

  if(gameover) cout << "GAMEOVER" << endl;
  else cout << "CONTINUE" << endl;
}