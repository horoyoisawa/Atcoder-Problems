#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++) {
    cin >> A[i];
  }

  int max = 0;

  for(int i=0;i<N;i++) {
    for(int j=i+1;j<N;j++) {
      if(abs(A[i]-A[j]) > max) {
        max = abs(A[i]-A[j]);
      }
    }
  }

  cout << max << endl;
}