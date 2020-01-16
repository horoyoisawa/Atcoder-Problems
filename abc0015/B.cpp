#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  int bugSoft = 0;
  double bug = 0;
  for(int i=0;i<n;i++) {
    cin >> a[i];
    if(a[i] != 0) {
      bugSoft++;
      bug += a[i];
    }
  }

  cout << ceil(bug/bugSoft) << endl;


}