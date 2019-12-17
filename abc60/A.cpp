#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  int size1 = a.size()-1;
  int size2 = b.size()-1;
  int size3 = c.size()-1;

  if(a[size1] == b[0] && b[size2] == c[0]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}