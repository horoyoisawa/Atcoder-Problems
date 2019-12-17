#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  map<char, int> counter;

  bool yes = true;

  for(int i=0;i<s.size();i++) {
    counter[s[i]]++;
    if(counter[s[i]] == 2) {
      yes = false;
      break;
    }
  }

  if(yes) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
}