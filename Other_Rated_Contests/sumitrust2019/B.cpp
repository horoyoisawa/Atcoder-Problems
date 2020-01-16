#include <bits/stdc++.h>
using namespace std;

int main() {
  double n;
  cin >> n;

  int x =  floor(n / 1.08);
  
  bool yes = false;
  int ans = 0;
  for(int i=x;i<x+10;i++) {
    if(floor(i * 1.08) == n) {
      yes = true;
      ans = i;
    }
  }

  if(yes) {
    cout << ans << endl;    
  } else {
    cout << ":(" << endl;
  }
}