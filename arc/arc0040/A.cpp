#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int takahashi = 0;
  int aoki = 0;
  for(int i=0;i<n;i++) {
    string s;
    cin >> s;
    for(int j=0;j<n;j++) {
      if(s[j] == 'R') {
        takahashi++;
      } else if(s[j] == 'B') {
        aoki++;
      }
    }
  }

  if(takahashi<aoki) cout << "AOKI" << endl;
  else if(takahashi>aoki) cout << "TAKAHASHI" << endl;
  else cout << "DRAW" << endl;
}