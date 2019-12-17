#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s = to_string(n);
  if(s[0] == '9' || s[1] == '9') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}