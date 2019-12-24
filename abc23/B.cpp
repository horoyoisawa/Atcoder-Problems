#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;

  if(n % 2 == 0) {
    cout << -1 << endl;
  } else {
    int half = n / 2;
    int num = 0;
    for(int i=0;i<half+1;i++) {
      if(i == 0) {
        if(s[half + i] != 'b') {
          num = -1;
          break;
        } else {
          continue;
        }
      }

      if(i % 3 == 1) {
        if(s[half+i] == 'c' && s[half-i] == 'a') continue;
        else {
          num = -1;
          break;
        }
      }
      if(i % 3 == 2) {
        if(s[half+i] == 'a' && s[half-i] == 'c') continue;
        else {
          num = -1;
          break;
        }
      }
      if(i % 3 == 0) {
        if(s[half+i] == 'b' && s[half-i] == 'b') continue;
        else {
          num = -1;
          break;
        }
      }
    }

    if(num == -1) cout << -1 << endl;
    else cout << half << endl;
  }
}