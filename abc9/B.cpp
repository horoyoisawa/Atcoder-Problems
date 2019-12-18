#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(n);

  for(int i=0;i<n;i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.end());

  for(int i=1;i<n;i++) {
    if(A[n-i-1] == A[n-i]) {
      continue;
    } else {
      cout << A[n-i-1] << endl;
      break;
    }
  }
}