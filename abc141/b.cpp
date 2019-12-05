#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  bool yes = true;

  for(int i=0;i<S.size();i++) {
    if(i%2 == 0) {
      if (S[i] == 'L') {
        yes = false;
        break;
      }
    } else {
      if(S[i] == 'R') {
        yes = false;
        break;
      }
    }
  }

  if(yes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}