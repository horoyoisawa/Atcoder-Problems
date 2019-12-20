#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int num = 0;

  for(int i=0;i<n;i++) {
    string s;
    int d;
    cin >> s >> d;
    if(s == "East") {
      if(d < a) num += a;
      else if(d <= b) num += d;
      else num += b;
    } else {
      if(d < a) num -= a;
      else if(d <= b) num -= d;
      else num -= b;
    }
  }

  if(num < 0) {
    cout << "West" << " " << abs(num) << endl;
  } else if (num == 0) {
    cout << 0 << endl;
  } else {
    cout << "East " << num << endl;
  }
}