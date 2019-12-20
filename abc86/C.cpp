#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  pair<int, int> point(0, 0);
  int time = 0;

  bool yes = true;

  for(int i=0;i<N;i++) {
    int t, x, y;
    cin >> t >> x >> y;

    int diff = t - time;
    int dis = abs(x-point.first)+abs(y-point.second);
    if(dis > diff) {
      yes = false;
      break;
    } else if((diff-dis)%2!=0) {
      yes = false;
      break;
    }

    time = t;
    point.first = x;
    point.second = y;
  }

  if(yes) cout << "Yes" << endl;
  else cout << "No" << endl;
}