#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  long long int ans = 0;

  vector<int> A(3 * N);
  for(int i = 0; i < 3 * N; i++) cin >> A[i];
  sort(A.begin(), A.end());

  for(int i = 0; i < N; i++) {
    ans += A[3 * N - (i + 1) * 2];
  }

  cout << ans << endl;
}