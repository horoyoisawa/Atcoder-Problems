#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char> > masu(H, vector<char>(W));

  for(int i=0;i<H;i++) {
    for(int j=0;j<W;j++) {
      char ch;
      cin >> ch;
      masu[i][j] = ch;
    }
  }

  vector<bool> allWhiteRow(H, true);
  vector<bool> allWhiteColumn(W, true);

  for(int i=0;i<H;i++) {
    for(int j=0;j<W;j++) {
      if(masu[i][j] == '#') {
        allWhiteRow[i] = false;
        allWhiteColumn[j] = false;
      }
    }
  }

  for(int i=0;i<H;i++) {
    if(!allWhiteRow[i]) {
      for(int j=0;j<W;j++) {
        if(!allWhiteColumn[j]) {
          cout << masu[i][j];
        }
      }
      cout << endl;
    }
  }
}