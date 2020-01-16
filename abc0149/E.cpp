#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long int m;
  cin >> n >> m;
  vector<int> A(n);
  int total2 = 0;
  for(int i=0;i<n;i++) {
    cin >> A[i];
    total2 += A[i];
  }
  vector<int> B(n*n);
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      B[i*n+j] = A[i] + A[j];
    }
  }

  sort(B.rbegin(), B.rend());

  long long int total1 = 0;
  for(int i=0;i<B.size();i++) {
    total1 += B[i];
  }

  cout << total1 << endl;
  cout << total2 * (2 * n) << endl;
}