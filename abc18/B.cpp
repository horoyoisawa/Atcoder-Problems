#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int N;
  cin >> S >> N;
  vector<pair<int, int>> lr(N);
  for(int i=0;i<N;i++) {
    int l, r;
    cin >> l >> r;

    string sub = S.substr(l-1, r-l+1);
    reverse(sub.begin(), sub.end());
    for(int j=l-1;j<r;j++) {
      S[j] = sub[j-l+1];
    }
  }

  cout << S << endl;
}