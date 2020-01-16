#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> magic(10, vector<int>(10));
  for(int i=0;i<10;i++) {
    for(int j=0;j<10;j++) {
      cin >> magic[i][j];
    }
  }

  for(int k=0;k<10;k++) {
    for(int i=0;i<10;i++) {
      for(int j=0;j<10;j++) {
        if(magic[i][j] > magic[i][k] + magic[k][j]) magic[i][j] = magic[i][k] + magic[k][j];
      }
    }
  }

  int ans = 0;

  for(int i=0;i<h;i++) {
    for(int j=0;j<w;j++) {
      int a;
      cin >> a;
      if(a == -1) continue;
      else ans += magic[a][1];
    }
  }

  cout << ans << endl;
}