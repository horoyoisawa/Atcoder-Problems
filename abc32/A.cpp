#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, n;

  cin >> a >> b >> n;

  int start = n;

  while(start % a != 0 || start % b != 0) {
    start++;
  }

  cout << start << endl;
}