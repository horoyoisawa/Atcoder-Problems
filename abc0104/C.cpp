#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

int main() {
  int D, G;
  cin >> D >> G;

  vector<P> point(D);
  for(int i=0;i<D;i++) {
    cin >> point[i].first >> point[i].second;
  }

  vector<int> p(D);
  iota(p.begin(), p.end(), 0);

  int ans = INT_MAX;
  do {
    int total = 0;
    int solved = 0;
    for(int i=0;i<D;i++) {
      int k = p[i];
      int add = 100 * (k+1) * point[k].first + point[k].second;
      if(total + add < G) {
        total += add;
        solved += point[k].first;
      }
      else if(total + add == G) {
        solved += point[k].first;
        break;
      }
      else {
        int b = (G-total)/(100 * (k + 1));
        if((G-total)%(100 * (k + 1)) != 0) b++;
        solved += min(point[k].first, b);
        break;
      }
    }

    if(solved < ans) ans = solved;
  } while(next_permutation(p.begin(), p.end()));

  cout << ans << endl;
}