#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> s = {a, b, c};

  sort(s.begin(), s.end());

  if((s[2]-s[1]+s[2]-s[0]) % 2 == 0) {
    cout << (s[2]-s[1]+s[2]-s[0]) / 2 << endl;
  } else {
    cout << (s[2]-s[1]+s[2]-s[0]+1) / 2 + 1 << endl;
  }
}