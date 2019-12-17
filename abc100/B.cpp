#include <bits/stdc++.h>
using namespace std;

int main() {
  int D, N;
  cin >> D >> N;

  int ans = 0;

  if(D == 0) {
    int n = 1;
    for(int i=1;;i++) {
      if(i % 100 != 0) {
        if(n == N) {
          ans = i;
          break;
        }
        n++;
      }
    }
  } else if (D == 1) {
    int n = 1;
    for(int i=100;;i+=100) {
      if(i % 10000 != 0) {
        if(n == N) {
          ans = i;
          break;
        }
        n++;
      }
    }
  } else {
    int n=1;
    for(int i=10000;;i+=10000 ) {
      if(i % 1000000 != 0) {
        if(n == N) {
          ans = i;
          break;
        }
        n++;
      }
    }
  }

  cout << ans << endl;
}