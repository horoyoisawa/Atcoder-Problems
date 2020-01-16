#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool ok;
  pair<int, int> ans;
  vector<vector<int>> input(n, vector<int>(3));
  for(int i=0;i<n;i++) {
    cin >> input[i][0] >> input[i][1] >> input[i][2];
  }
  long long int ansH = 0;
  for(int cx=0;cx<=100;cx++) {
    for(int cy=0;cy<=100;cy++) {
      ok = true;
      long long int HMAX = LLONG_MAX;
      long long int H = LLONG_MAX;
      for(int i=0;i<n;i++) {
        int x = input[i][0];
        int y = input[i][1];
        int h = input[i][2];

        int z = abs(x-cx)+abs(y-cy);
        if(h == 0) {
          if(z<=HMAX) HMAX = z;
        } else {
          if(H == LLONG_MAX) H = z + h;
          else if(max(H-z, 0LL) == h) continue;
          else {
            ok = false;
            break;
          }
        }
      }

      if(H > HMAX) ok = false;
      if(ok) {
        ans.first = cx;
        ans.second = cy;
        ansH = H;
        break;
      }
    }
    if(ok) break;
  }

  cout << ans.first << " " << ans.second << " " << ansH << endl;
}