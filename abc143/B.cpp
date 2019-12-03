#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long int result = 0;

  vector<int> d(n);
  for(int i=0;i<n;i++) {
    cin >> d[i];
  }

  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      result += d[i] * d[j];
    }
  }

  cout << result << endl;
  return 0;
}