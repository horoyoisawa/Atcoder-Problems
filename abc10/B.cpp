#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }

  int result = 0;
  for(int i=0;i<n;i++){
    while(a[i] % 3 == 2 || a[i] % 2 == 0) {
      a[i]--;
      result++;
    }
  }

  cout << result << endl;
}