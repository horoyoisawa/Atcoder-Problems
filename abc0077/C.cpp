#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  vector<int> B(n);
  vector<int> C(n);

  rep(i, n) cin >> A[i];
  rep(i, n) cin >> B[i];
  rep(i, n) cin >> C[i];

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  sort(C.begin(), C.end());

  long long int ans = 0; 
  rep(i, n) {
    auto it_a = lower_bound(A.begin(), A.end(), B[i]);
    auto it_c = upper_bound(C.begin(), C.end(), B[i]);
    long long int d_a = distance(A.begin(), it_a);
    long long int d_c = distance(it_c, C.end());

    ans += d_a * d_c;
  }

  cout << ans << endl;
}