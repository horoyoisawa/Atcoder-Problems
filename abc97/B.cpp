#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;
  vector<int> beki(0);
  beki.push_back(1);

  for(int i=2;;i++) {
    if(pow(i, 2) > 1500) {
      break;
    }
    for(int j=2;;j++) {
      if(pow(i, j) <= 1500) {
        beki.push_back(pow(i, j));
      } else {
        break;
      }
    }
  }

  sort(beki.begin(), beki.end());

  int ans = 0;

  for(int i=0;i<beki.size();i++) {
    if(beki[i] > X) {
      ans = beki[i-1];
      break;
    }
  }

  cout << ans << endl;
}