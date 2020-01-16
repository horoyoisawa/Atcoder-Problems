#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int black = 0;
  int white = 0;
  cin >> n;
  for(int i=0;i<n;i++) {
    string s;
    cin >> s;
    if(s == "black") black++;
    else white++;
  }

  if(black > white) cout << "black" << endl;
  else cout << "white" << endl;
}