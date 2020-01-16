#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;

  vector<int> A(n);
  for(int i=0;i<n;i++) cin >> A[i];
  sort(A.begin(), A.end());
  
  for(int i=0;i<n;i++) {
    if(i % 2 == 0) y += A[i];
    else x += A[i];
  }

  if(x == y) cout << "Draw" << endl;
  else if(x > y) cout << "Takahashi" << endl;
  else cout << "Aoki" << endl;
}