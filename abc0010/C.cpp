#include <bits/stdc++.h>
using namespace std;

int main() {
  int xa, ya, xb, yb, T, V, n;
  cin >> xa >> ya >> xb >> yb >> T >> V >> n;
  bool yes = false;
  for(int i=0;i<n;i++) {
    int max = T * V;
    int x, y;
    cin >> x >> y;
    double dist1 = sqrt((xa-x)*(xa-x)+(ya-y)*(ya-y));
    double dist2 = sqrt((xb-x)*(xb-x)+(yb-y)*(yb-y));
    if(dist1+dist2<=max) {
      yes = true;
      break;
    } 
  }

  if(yes) cout << "YES" << endl;
  else cout << "NO" << endl;
}