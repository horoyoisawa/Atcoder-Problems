#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);

  for(int i=0;i<n;i++) {
    cin >> a[i] >> b[i];
  }

  vector<int>::iterator it = max_element(a.begin(), a.end());
  int i = distance(a.begin(), it);
  cout << a[i] + b[i] << endl;
}