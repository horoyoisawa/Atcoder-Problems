#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> a(n);
  vector<string> b(m);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }
  for(int i=0;i<m;i++) {
    cin >> b[i];
  }

  bool yes = false;

  for(int i=0;i<n-m+1;i++) {
    for(int j=0;j<n-m+1;j++) {
      bool same = true;
      for(int k=i;k<i+m;k++) {
        string sub = a[k].substr(j, m);
        if(sub == b[k-i]) continue;
        else {
          same = false;
          break;
        }
      }

      if(same) {
        yes = true;
        break;
      }
    }

    if(yes) {
      break;
    }
  }

  if(yes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}