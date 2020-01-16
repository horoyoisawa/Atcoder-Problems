#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int candy;
  cin >> n >> candy;
  long long int required = 0;
  vector<int> children(n);
  int ans = 0;
  for(int i=0;i<n;i++) {
    cin >> children[i];  
  }

  sort(children.begin(), children.end());

  for(int i=0;i<n;i++) {
    required += children[i];
    if(required == candy) {
      ans = i + 1;
      break;
    }

    if(required > candy) {
      ans = i;
      break;
    }

    if(i == n-1) ans = n - 1;
  }

  cout << ans << endl;
}