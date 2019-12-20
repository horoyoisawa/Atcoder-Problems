#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> ame(n, vector<int>(2));
  for(int i=0;i<n;i++) {
    cin >> ame[i][0];
  }
  for(int i=0;i<n;i++) {
    cin >> ame[i][1];
  }

  int max = 0;
  for(int i=0;i<n;i++) {
    int total = 0;
    for(int j=0;j<=i;j++) {
      total += ame[j][0];
    }
    for(int j=i;j<n;j++) {
      total += ame[j][1];
    }
    if(total > max) max = total;
  }

  cout << max << endl;
}