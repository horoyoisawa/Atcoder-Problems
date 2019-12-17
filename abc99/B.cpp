#include <bits/stdc++.h>
using namespace std;

int height(int i) {
  if(i == 0) {
    return 0;
  }

  return i + height(i-1);
}
int main() {
  int a, b;
  cin >> a >> b;
  int diff = b - a;
  int h = height(diff);

  cout << h - b << endl;
}