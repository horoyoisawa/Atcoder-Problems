#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  for(int i=0;i<n;i++) {
    cin >> t[i];
  }

  sort(t.begin(), t.end());

  cout << t[0] << endl;
}