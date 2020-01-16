#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(4);
  for(int i=0;i<4;i++) cin >> a[i];

  vector<int> b = {1, 4, 7, 9};

  sort(a.begin(), a.end());

  cout << (a == b ? "YES" : "NO") << endl;
}