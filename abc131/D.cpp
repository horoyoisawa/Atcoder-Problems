#include "../bits/stdc++.h"
using namespace std;

int maiin() {
  string s;
  cin >> s;
  bool good = true;
  for(int i=0;i<s.size()-2;i++) {
    if(s[i] == s[i+1]) {
      good = false;
      break;
    }
  }

  if(good) {
    cout << "Good" << endl;
  } else {
    cout << "Bad" << endl;
  }
}