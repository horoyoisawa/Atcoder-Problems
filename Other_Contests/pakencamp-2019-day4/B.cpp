#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long int> vec(n+1);

  vec[0] = 1;
  vec[1] = 6;

  for(int i=2;i<=n;i++) {
    vec[i] = vec[i-1] + (vec[i-1] - vec[i-2]) * 5;
  }

  cout << vec[n] << endl;
}