#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++) cin >> A[i];
  vector<int> B = A;
  sort(A.begin(), A.end());

  int half = A[N/2];

  for(int i=0;i<N;i++) {
    if(B[i] < half) cout << half << endl;
    else cout << A[N/2-1] << endl; 
  }
}