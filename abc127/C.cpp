#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

P kyoutuu(P a, P b) {
  P p;
  p.first = max(a.first, b.first);
  p.second = min(a.second, b.second);

  return p;
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<P> lr(M);
  for(int i=0;i<M;i++) {
    cin >> lr[i].first >> lr[i].second;
  }


  P p = lr[0];
  bool ok = true;

  for(int i=1;i<M;i++) {
    if(p.first > p.second) {
      ok = false;
      break;
    } else {
      p = kyoutuu(p, lr[i]);
    }
  }

  if(ok) {
    cout << p.second - p.first + 1 << endl;
  } else {
    cout << 0 << endl;
  }
}