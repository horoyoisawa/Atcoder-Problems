#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int x, y;
  cin >> x >> y;

  int length = 0;

  while(x <= y) {
    length++;
    x *= 2;
  }

  cout << length << endl;
}