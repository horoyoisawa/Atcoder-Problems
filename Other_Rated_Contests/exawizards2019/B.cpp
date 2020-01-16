#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int red = 0;
  int blue = 0;
  for(int i=0;i<s.size();i++) {
    if(s[i] == 'R') red++;
    else blue++;
  }

  cout << ((red > blue) ? "Yes" : "No") << endl;
}