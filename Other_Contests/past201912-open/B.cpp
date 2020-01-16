#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(n);

  cin >> A[0];

  for(int i=1;i<n;i++) {
    cin >> A[i];
    if(A[i] == A[i-1]) cout << "stay" << endl;
    else if(A[i] > A[i-1]) cout << "up " << abs(A[i] - A[i-1]) << endl;
    else cout << "down " << abs(A[i] - A[i-1]) << endl;
  }
}