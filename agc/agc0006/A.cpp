#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s, t;
  cin >> n >> s >> t;
  int intersection = 0;
  for(int i=n;i>=1;i--) {
    string subS = s.substr(n - i, i);
    string subT = t.substr(0, i);
    if(subS == subT) {
      intersection = i;
      break;
    }
  }

  cout << 2 * n - intersection << endl;
}