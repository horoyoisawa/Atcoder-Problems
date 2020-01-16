#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> A(n, vector<int>(m));

  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      cin >> A[i][j];
    }
  }

  long long int MAX = 0;

  for(int i=0;i<m;i++) {
    for(int j=i+1;j<m;j++) {
      long long int total = 0;
      for(int k=0;k<n;k++) {
        total += max(A[k][i], A[k][j]);
      }
      if(total > MAX) MAX = total;
    }
  }

  cout << MAX << endl;
}