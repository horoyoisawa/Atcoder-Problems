#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  vector<int> b(n);
  b[n/2] = a[0];
  for(int i=1;2*i<n+1;i++) {
    if(n%2==0) {
      if(2*i==n) b[n/2-i] = a[2*i-1];
      else {
        b[n/2+i] = a[2*i];
        b[n/2-i] = a[2*i-1];
      }
    } else {
      b[n/2-i] = a[2*i];
      b[n/2+i] = a[2*i-1];
    }
  }

  for(int i=0;i<b.size();i++) cout << b[i] << endl;
}