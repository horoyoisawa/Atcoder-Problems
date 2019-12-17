#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int> > vec(M, vector<int>(0));
  for(int i=0;i<M;i++) {
    int k;
    cin >> k;
    for(int j=0;j<k;j++) {
      int s;
      cin >> s;
      vec[i].push_back(s);
    }
  }

  vector<int> p(M);
  for(int i=0;i<M;i++) {
    cin >> p[i];
  }

  int ans = 0;

  for(int i=0;i<pow(2, N);i++) {
    bitset<10> b(i);
    bool ok = true;
    for(int j=0;j<M;j++) {
      int total = 0;
      for(int k=0;k<vec[j].size();k++) {
        int num = vec[j][k];
        if(b[num-1]) {
          total++;
        }
      }
      if(total % 2 == p[j]) {
        continue;
      } else {
        ok = false;
        break;
      }
    }

    if(ok) {
      ans++;
    }
  }
  cout << ans << endl;
}