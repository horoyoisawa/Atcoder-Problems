#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;
  int max = y / 1000;

  if(max < n) {
    cout << -1 << " " << -1 << " " << -1 << endl;
  } else {
    int tenThou = -1;
    int fiveThou = -1;
    int thou = -1;
    for(int i=0;max-9*i-n>=0&&i<=n;i++) {
      int remainder = (max-9*i-n) % 4;
      int j = (max-9*i-n) / 4;
      if(remainder==0&&n-i-j>=0) {
        tenThou = i;
        fiveThou = j;
        thou = n-i-j;
      }
    }
    cout << tenThou << " " << fiveThou << " " << thou << endl;
  }
}