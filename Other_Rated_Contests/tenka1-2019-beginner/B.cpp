#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> s >> k;

  char a = s[k-1];

  for(int i=0;i<s.size();i++) {
    if(s[i] == a) cout << a;
    else cout << '*';
  }

  cout << endl;
}