#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a = {1, 3, 5, 7, 8, 10, 12};
  vector<int> b = {4, 6, 9, 11};
  vector<int> c = {2};

  int x, y;

  cin >> x >> y;

  int times = 0;

  for(int i=0;i<a.size();i++) {
    if(a[i] == x || a[i] == y) {
      times++;
    }
  }

  if(times == 1) {
    cout << "No" << endl;
    return 0;
  }

  times = 0;

  for(int i=0;i<a.size();i++) {
    if(b[i] == x || b[i] == y) {
      times++;
    }
  }

  if(times == 1) {
    cout << "No" << endl;
    return 0;
  }

  if(x == 2 || y == 2) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}