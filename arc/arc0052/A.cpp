#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for(int i=0;i<s.size();i++) {
    int a = s[i] - '0';
    if(0 <= a && a <= 9) cout << a;
  }
  cout << endl;
}