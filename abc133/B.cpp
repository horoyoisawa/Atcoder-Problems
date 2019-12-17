#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<vector<int> > x(N, vector<int>(D));

  for(int i=0;i<N;i++) {
    for(int j=0;j<D;j++) {
      cin >> x[i][j];
    }
  }

  int combi = 0;

  for(int i=0;i<N;i++) {
    for(int j=i+1;j<N;j++) {
      int total = 0;
      for(int k=0;k<D;k++) {
        total += pow(x[i][k] - x[j][k], 2);
      }

      if(sqrt(total) == floor(sqrt(total))) {
        combi++;
      }
    }
  }

  cout << combi << endl;

  return 0;
}