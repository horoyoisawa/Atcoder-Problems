#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int> > c(3, vector<int>(3));
  for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
      cin >> c[i][j];
    }
  }

  int d = 0;
  int e = 0;
  int f = 0;
  int g = 0;

  bool yes = true;

  for(int i=0;i<3;i++) {
    if(i==0) {
      d = c[i][1] - c[i][0];
      e = c[i][2] - c[i][1];
      f = c[1][i] - c[0][i];
      g = c[2][i] - c[1][i];
    } else {
      if(c[i][1] - c[i][0] != d || c[i][2] - c[i][1] != e || c[1][i] - c[0][i] != f || c[2][i] - c[1][i] != g) {
        yes = false;
        break;
      }
    }
  }

  if(yes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}