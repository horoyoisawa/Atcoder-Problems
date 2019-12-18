#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> squares(n);

  for(int i=0;i<n;i++) {
    cin >> squares[i];
  }

  for(int i=0;i<n;i++) {
    for(int j=n-1;j>=0;j--) {
      cout << squares[j][i];
    }

    cout << endl;
  }
}