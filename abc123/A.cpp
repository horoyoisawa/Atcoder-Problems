#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  for(int i=0;i<5;i++) {
    cin >> a[i];
  }
  int k;
  cin >> k;
  bool ok = true;
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++) {
      if(a[j]-a[i]>k) {
        ok = false;
        break;
      }
    }
  }

  if(ok) {
    cout << "Yay!" << endl;
  } else {
    cout << ":(" << endl;
  }
}