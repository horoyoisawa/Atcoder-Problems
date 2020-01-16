#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> happiness(n+1, vector<int>(n+1));

  for(int i=1;i<=n-1;i++) {
    for(int j=i+1;j<=n;j++) {
      int point;
      cin >> point;
      happiness[i][j] = point;
      happiness[j][i] = point;
    }
  }

  string combi(n, '0');
  combi.push_back('1');
  combi.push_back('1');

  for(int i=0;i<n;i++) {
    cout << combi[i];
  }
  cout << endl;
}