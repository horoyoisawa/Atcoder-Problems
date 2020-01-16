#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int w;
  cin >> s >> w;

  for(int i=0;i<s.size();i+=w) {
    cout << s[i];
  }
  cout << endl;
}