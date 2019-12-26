#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int length = 0;
  int max = 0;

  for(int i=0;i<s.size();i++) {
    if(length != 0) {
      length++;
    }
    if(s[i] == 'A' && length == 0) {
      length++;
    }
    if(s[i] == 'Z') {
      max = length;
    }
  }

  cout << max << endl;
}