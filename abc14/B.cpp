#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, X;
  cin >> n >> X;
  vector<int> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }

  bitset<32> value(X);

  int total = 0;

  for(int i=0;i<value.size();i++) {
    if(value[i] == 1) {
      total += a[i];
    }
  }

  cout << total << endl;
}