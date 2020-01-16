#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  long long int a;
  int b;
  cin >> n >> a >> b;

  vector<long long int> D(b+1);
  long long int limit = 0;
  long long int ans = 0;
  D[0] = 0;
  for(int i=1;i<=b;i++) {
    cin >> D[i];
  }
  sort(D.begin(), D.end());
  for(int i=1;i<=b+1;i++) {
    if(i == b+1) ans += (n - D[i-1]) / a;
    else ans += (D[i] - D[i-1] - 1) / a;
  }

  cout << n - (ans + b) << endl;

}