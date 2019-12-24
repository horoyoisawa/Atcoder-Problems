#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> counter;

  int num = 0;

  for(int i=0;i<n;i++) {
    cin >> a[i];
    counter[a[i]]++;
    if(counter[a[i]] != 1) {
      num++;
    }
  }
  cout << num << endl;
}