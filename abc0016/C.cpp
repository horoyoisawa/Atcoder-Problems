#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<long long int>> friends(n+1, vector<long long int>(n+1, INT_MAX));

  for(int i=0;i<m;i++) {
    int a, b;
    cin >> a >> b;

    friends[a][b] = 1;
    friends[b][a] = 1;
  }

  for(int i=1;i<n+1;i++) {
    friends[i][i] = 0;
  }

  for(int k=1;k<n+1;k++) {
    for(int i=1;i<n+1;i++) {
      for(int j=1;j<n+1;j++) {
        if(friends[i][j] > friends[i][k] + friends[k][j]) friends[i][j] = friends[i][k] + friends[k][j];
      }
    }
  }

  for(int i=1;i<n+1;i++) {
    int ans = 0;
    for(int j=1;j<n+1;j++) {
      if(friends[i][j] == 2) ans++;
    }

    cout << ans << endl;
  }
}