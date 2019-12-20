#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  long long int k;
  cin >> s >> k;

  int index = 101;
  int number = 1;
  for(int i=0;i<s.size();i++) {
    if(s[i] != '1') {
      index = i;
      number = s[i] - '0';
      break;
    }
  }

  if(k-1 < index) {
    cout << 1 << endl;
  } else {
    cout << number << endl;
  }

}