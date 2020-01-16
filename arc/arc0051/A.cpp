#include <bits/stdc++.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
  return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int main() {
  int x1, y1, r;
  cin >> x1 >> y1 >> r;

  int x2, y2, x3, y3;
  cin >> x2 >> y2 >> x3 >> y3;

  if(x1 + r > x3 || y1 + r > y3 || x1 - r < x2 || y1 - r < y2) cout << "YES" << endl;
  else cout << "NO" << endl;

  if(distance(x3, y3, x1, y1) > r || distance(x2, y3, x1, y1) > r || distance(x2, y2, x1, y1) > r || distance(x3, y2, x1, y1) > r) cout << "YES" << endl;
  else cout << "NO" << endl;

}