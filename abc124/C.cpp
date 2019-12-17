#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int total1 = 0;
  int total2 = 0;

  // start black
  for(int i=0;i<s.size();i++) {
    if(i % 2 == 0 && s[i] != '0') {
      total1 += 1;
      continue;
    }
    if(i % 2 != 0 && s[i] != '1') {
      total1 += 1;
      continue;
    }
  }

  // start white
  for(int i=0;i<s.size();i++) {
    if(i % 2 == 0 && s[i] != '1') {
      total2 += 1;
      continue;
    }
    if(i % 2 != 0 && s[i] != '0') {
      total2 += 1;
      continue;
    }
  }

  if(total1 > total2) {
    cout << total2 << endl;
  } else {
    cout << total1 << endl;
  }
}