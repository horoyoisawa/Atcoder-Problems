#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  bool complete = true;
  int day = 0;
  for(int i=1;i<=m;i++) {
    if(n <= a) n += b;
    int c;
    cin >> c;
    n -= c;
    if(n < 0) {
      complete = false;
      day = i;
      break;
    }
  }

  if(complete) {
    cout << "complete" << endl;
  } else {
    cout << day << endl;
  }
}