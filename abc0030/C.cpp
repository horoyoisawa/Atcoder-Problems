#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;

  vector<int> fromA(n);
  vector<int> fromB(m);

  for(int i=0;i<n;i++) cin >> fromA[i];
  for(int i=0;i<m;i++) cin >> fromB[i];

  int time = 0;

  int a = 0;
  int b = 0;

  int ans = 0;

  while(time<=fromA[n-1]) {
    for(int i=a;i<n;i++) {
      if(fromA[i] >= time) {
        time = fromA[i] + x;
        a = i + 1;
        break;
      }
    }

    bool returned = false;
    for(int i=b;i<m;i++) {
      if(fromB[i] >= time) {
        time = fromB[i] + y;
        returned = true;
        b = i + 1;
        break;
      }
    }

    if(returned) ans++;
    else break;
  }

  cout << ans << endl;
}