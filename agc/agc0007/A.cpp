#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> A(h, vector<char>(w));
  int total = 0;
  for(int i=0;i<h;i++) {
    for(int j=0;j<w;j++) {
      cin >> A[i][j];
      if(A[i][j] == '#') total++;
    }
  }
  int expected = h + w - 1;

  if(total == expected) cout << "Possible" << endl;
  else cout << "Impossible" << endl;
}