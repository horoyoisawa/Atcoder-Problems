#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int length = 1;
  int ans = 0;
  vector<int> slime(n);
  for(int i=0;i<n;i++) cin >> slime[i];

  for(int i=0;i<n-1;i++) {
    if(slime[i] == slime[i+1]) length++;
    else {
      ans += length /2;
      length = 1;
    }

    if(i == n - 2) ans += length / 2;
  }

  cout << ans << endl;
}