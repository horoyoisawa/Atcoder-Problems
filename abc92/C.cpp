#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N+1);
  A[0] = 0;
  for(int i=1;i<N+1;i++) cin >> A[i];

  vector<int> dist(N+1);
  int total = 0;
  for(int i=0;i<N+1;i++) {
    dist[i] = abs(A[i]-A[(i+1)%(N+1)]);
    total += dist[i];
  }

  for(int i=1;i<N+1;i++) {
    cout << total - dist[i-1] - dist[i] + abs(A[(i+1)%(N+1)]-A[i-1]) << endl;
  }
}