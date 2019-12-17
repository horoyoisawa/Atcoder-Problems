#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  bool yes = false;
  int a = N / 7;
  for(int j=0;j<=a;j++) {
    int b = N - 7 * j;
    if(b % 4 == 0) {
      yes = true;
      break;
    }
  }

  if(yes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}