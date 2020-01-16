#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int a, b, c, d;
  cin >> s >> a >> b >> c >> d;
  b++;
  c+=2;
  d+=3;
  int index = 0;
  for(int i=0;i<s.size()+4;i++) {
    if(i == a || i == b || i == c || i == d) cout << '"';
    else {
      cout << s[index];
      index++;
    }
  }

  cout << endl;

}