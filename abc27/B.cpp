// 答え見ました。

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int total = 0;
  for(int i=0;i<n;i++) {
    cin >> a[i];
    total += a[i];
  }

  if(total % n != 0) {
    cout << -1 << endl;
    return 0;
  }

  int average = total / n;

  int bridges = 0;

  int totalNow = 0;

  for(int i=0;i<n-1;i++) {
    totalNow += a[i];
    if(totalNow != average * (i+1)) bridges++;
  }

  cout << bridges << endl;

  return 0;

}

