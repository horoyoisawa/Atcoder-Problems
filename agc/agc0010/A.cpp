#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int odd = 0;
  for(int i=0;i<n;i++) {
    int a;
    cin >> a;
    if(a % 2 == 1) odd++;
  }
  if(odd % 2 == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}