#include <bits/stdc++.h>
using namespace std;

vector<int> four(int n, int size) {
  vector<int> res(size);

  for(int i=size-1;i>=0;i--) {
    res[i] = n / (int)pow(4, i);
    n %= (int)pow(4, i);
  }

  return res;
}

int main() {
  int n;
  int a, b, c;
  cin >> n >> a >> b >> c;
  vector<int> l(n);
  for(int i=0;i<n;i++) cin >> l[i];

  sort(l.begin(), l.end());

  int min = INT_MAX;
  int lastp = 0;
  int lastq = 0;
  int lastr = 0;
  do {
    int s = n - 3;
    for(int i=0;i<pow(4, s); i++) {
      vector<int> f = four(i, s);
      int p = l[0];
      int q = l[1];
      int r = l[2];
      if(lastp == p && lastq == q && lastr == r) break;
      int ans = 0;
      for(int j=0;j<f.size();j++) {
        if(f[j] == 0) {
          p+= l[j+3];
          ans += 10;
        }
        if(f[j] == 1) {
          q+= l[j+3];
          ans += 10;
        }
        if(f[j] == 2) {
          r+= l[j+3];
          ans += 10;
        }
      }

      ans += abs(p - a) + abs(q - b) + abs(r - c);

      if(ans < min) min = ans;
    }

    lastp = l[0];
    lastq = l[1];
    lastr = l[2];
  } while (next_permutation(l.begin(), l.end()));

  cout << min << endl;
}