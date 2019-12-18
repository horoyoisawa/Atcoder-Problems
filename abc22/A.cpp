#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, t;
  int w;
  cin >> n >> s >> t >> w;
  int days = 0;
  if(s <= w && w <= t) days++;
  for(int i=0;i<n-1;i++) {
    int a;
    cin >> a;
    w += a;
    if(s <= w && w <= t) days++;
  }

  cout << days << endl;
}