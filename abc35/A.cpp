#include <bits/stdc++.h>
using namespace std;

int main() {
  double w, h;
  cin >> w >> h;

  if(w / 4 * 3 == h) {
    cout << "4:3" << endl;
  } else {
    cout << "16:9" << endl;
  }
}