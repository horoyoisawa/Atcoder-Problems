#include <bits/stdc++.h>
using namespace std;

const string G = "GREATER";
const string L = "LESS";
const string E = "EQUAL";

int main() {
  string s;
  string t;
  cin >> s >> t;

  if(s.size()>t.size()) {
    cout << G << endl;
    return 0;
  } else if(t.size()>s.size()) {
    cout << L << endl;
    return 0;
  }

  bool equal = true;

  for(int i=0;i<s.size();i++) {
    if(s[i] > t[i]) {
      equal = false;
      cout << G << endl;
      break;
    } else if (s[i] < t[i]) {
      equal = false;
      cout << L << endl;
      break;
    }
  }

  if(equal) {
    cout << E << endl;
  }

  return 0;
}