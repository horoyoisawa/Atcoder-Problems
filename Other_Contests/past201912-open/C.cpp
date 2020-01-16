#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(6);
  for(int i=0;i<6;i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  cout << a[3] << endl;
}