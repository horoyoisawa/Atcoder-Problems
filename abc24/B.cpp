#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, t;
  cin >> n >> t;
  int limit = 0;
  int ans = 0;
  for(int i=0;i<n;i++) {
    int a;
    cin >> a;
    if(a > limit) {
      ans += a - limit;
      limit = a + t;
    } else {
      limit = a + t;
    }
  }

  cout << limit - ans << endl;
}