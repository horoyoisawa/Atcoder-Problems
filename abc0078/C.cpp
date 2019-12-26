#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  int k = 100 * (N - M) + 1900 * M;
  int l = pow(2, M);

  cout << k * l << endl;
}