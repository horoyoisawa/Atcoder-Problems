#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++) {
    if(i == 0) {
      s[i] = (char) toupper(s[i]);
    } else {
      s[i] = (char) tolower(s[i]);
    }
  }

  cout << s << endl;
}