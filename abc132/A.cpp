#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int total = 0;
  for(int i=0;i<s.size();i++) {
    for(int j=i+1;j<s.size();j++) {
      if(s[i] == s[j]) total++;
    }
  }
  if(total == 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}