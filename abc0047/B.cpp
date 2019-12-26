#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  int left = 0;
  int right = w;
  int up = h;
  int down = 0;

  for(int i=0;i<n;i++) {
    int x, y, a;
    cin >> x >> y >> a;
    if(a == 1 && x > left) left = x;
    if(a == 2 && x < right) right = x;
    if(a == 3 && y > down) down = y;
    if(a == 4 && y < up) up = y;
  }
  if(right<left) cout << 0 << endl;
  else if(up<down) cout << 0 << endl;
  else {
    int area = (right - left) * (up - down);
    cout << area << endl;
  }
}