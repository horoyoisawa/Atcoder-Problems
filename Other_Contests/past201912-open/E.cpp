#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<vector<char>> follow(n+1, vector<char>(n+1, 'N'));

  for(int i=0;i<q;i++) {
    char a;
    cin >> a;
    if(a == '1') {
      int from, to;
      cin >> from >> to;
      follow[from][to] = 'Y';
    } else if(a == '2') {
      int fb;
      cin >> fb;
      for(int j=1;j<=n;j++) {
        if(follow[j][fb] == 'Y') follow[fb][j] = 'Y';
      }
    } else {
      int ff;
      cin >> ff;
      vector<int> whoToFollow(0);
      for(int j=1;j<=n;j++) {
        if(follow[ff][j] == 'Y') {
          for(int k=1;k<=n;k++) {
            if(follow[j][k] == 'Y' && ff != k) whoToFollow.push_back(k);
          }
        }
      }
      for(int j=0;j<whoToFollow.size();j++) follow[ff][whoToFollow[j]] = 'Y';
    }
  }

  for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {
      cout << follow[i][j];
    }
    cout << endl;
  }
}