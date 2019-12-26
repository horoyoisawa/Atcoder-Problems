#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int total = 0;
  for(int i=1;i<10;i++) {
    for(int j=1;j<10;j++) {
      total += i * j;
    }
  }

  int ans = total - N;
  for(int i=1;i<=ans;i++) {
    int j = 0;
    if(ans % i == 0) {
      j = ans / i;
    }
    if(j == 0 || max(i, j) > 9) continue;
    else cout << i << " x " << j << endl;
  }
}