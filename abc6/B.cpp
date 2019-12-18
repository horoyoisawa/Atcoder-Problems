#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n==1) {
    cout << 0 << endl;
  } else if (n == 2) {
    cout << 0 << endl;
  } else if (n == 3) {
    cout << 1 << endl;
  } else {
    vector<int> tri(n);
    tri[0] = 0;
    tri[1] = 0;
    tri[2] = 1;
    for(int i=3;i<n;i++) {
      tri[i] = (tri[i-1] + tri[i-2] + tri[i-3]) % 10007;
    }

    cout << tri[n-1] << endl;
  }

  return 0;
}