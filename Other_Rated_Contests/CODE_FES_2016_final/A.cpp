#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<string>> snake(h, vector<string>(w));
  int row = -1;
  int column = -1;
  for(int i=0;i<h;i++) {
    for(int j=0;j<w;j++) {
      cin >> snake[i][j];
      if(snake[i][j] == "snuke") {
        row = i + 1;
        column = j;
      }
    }
  }

  char c = 'A' + column;

  cout << c << row << endl;
}