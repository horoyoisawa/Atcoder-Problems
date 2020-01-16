#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int north = -1;
  int south = -1;
  int west = -1;
  int east = -1;

  for(int i=0;i<s.size();i++) {
    if(s[i] == 'N') north = 1;
    else if(s[i] == 'S') south = 1;
    else if(s[i] == 'W') west = 1;
    else if(s[i] == 'E') east = 1;
  }

  if(north * south == 1 && west * east == 1) cout << "Yes" << endl;
  else cout << "No" << endl;
}