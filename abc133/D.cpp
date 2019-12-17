#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long int> A(N);
  for(int i=0;i<N;i++) {
    long long int k;
    cin >> k;
    A[i] = 2 * k;
  }

  long long int total = 0;

  for(int i=0;i<N;i++) {
    total += A[i] * pow(-1, i);
  }

  vector<long long int> ans(N);
  ans[0] = total / 2;

  for(int i=1;i<N;i++) {
    ans[i] = A[i-1] - ans[i-1];
  }

  for(int i=0;i<N;i++) {
    cout << ans[i] << endl;
  }

  return 0;
}