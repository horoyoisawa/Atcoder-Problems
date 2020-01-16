#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int r, s, p;
  cin >> r >> s >> p;
  string t;
  cin >> t;

  int total = 0;

  for(int i=0;i<k;i++) {
    char previous = 'a';
    for(int j=i;j<n;j+=k) {
      if(t[j] == previous) {
        previous = 'a';
      }
      else {
        if(t[j] == 's') {
          total += r;
          previous = 's';
        }
        else if(t[j] == 'p') {
          total += s;
          previous = 'p';
        }
        else if(t[j] == 'r') {
          total += p;
          previous = 'r';
        }
      }
    }
  }

  cout << total << endl;
}