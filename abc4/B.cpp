#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<char> > c(4, vector<char>(4));

  for(int i=0;i<4;i++) {
    for(int j=0;j<4;j++) {
      cin >> c[i][j];
    }
  }
  for(int i=0;i<4;i++) {
    for(int j=0;j<4;j++) {
      cout << c[3-i][3-j] << " ";
    }
    cout << endl;
  }
}