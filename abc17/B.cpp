#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool chokugo = true;
  for(int i=0;i<s.size();i++) {
    if(i == 0 && s[i] == 'h') {
      chokugo = false;
      break;
    }

    if(i == s.size()-1 && s[i] == 'c') {
      chokugo = false;
      break;
    }

    if((s[i] == 'c' && s[i+1] == 'h') || s[i] == 'o' || s[i] == 'k' || s[i] == 'u') continue;
    else if (s[i] == 'h' && s[i-1] == 'c') continue;
    else {
      chokugo = false;
      break;
    }
  }

  if(chokugo) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl; 
  }
}