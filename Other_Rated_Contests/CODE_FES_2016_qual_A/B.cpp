#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  int pair = 0;

  for(int i=0;i<n;i++) {
    int j = a[i];
    if(i + 1 == a[j-1]) pair++;
  }

  cout << pair / 2 << endl;
}