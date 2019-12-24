#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> vec(n);
  for(int i=0;i<n;i++) cin >> vec[i];
  if((n-1)%(k-1)==0) cout << (n-1)/(k-1) << endl;
  else cout << (n-1)/(k-1) + 1 << endl;
}