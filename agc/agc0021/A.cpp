#include <bits/stdc++.h>
using namespace std;

pair<int, int> about(long long int n) {
  int times = 0;
  while(n >= 10) {
    times++;
    n /= 10;
  }

  pair<int, int> result = make_pair(n, times);

  return result;
}
int main() {
  long long int n;
  cin >> n;

  pair<int, int> lower = about(n);

  if(n == (lower.first + 1) * pow(10, lower.second) - 1) cout << lower.first + 9 * lower.second << endl;
  else cout << lower.first + 9 * lower.second - 1 << endl;
}