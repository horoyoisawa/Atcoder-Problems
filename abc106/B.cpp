#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  for(int i=1;i<=N;i+=2) {
    int total = 0;
    for(int j=1;j<=i;j++) {
      if(i % j == 0) {
        total++;
      }
    }

    if(total == 8) {
      ans++;
    }
  }

  cout << ans << endl;
}