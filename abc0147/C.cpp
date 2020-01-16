#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<pair<int, bool>>> hoge(n, vector<pair<int, bool>>(0));
  for(int i=0;i<n;i++) {
    int A;
    cin >> A;
    hoge[i].resize(A);
    for(int j=0;j<A;j++) cin >> hoge[i][j].first >> hoge[i][j].second;
  }
  int max = 0;
  for(int i=0;i<pow(2, n);i++) {
    bitset<32> kinder(i);
    bool ok = true;
    for(int j=0;j<n;j++) {
      if(kinder[j]) {
        for(int k=0;k<hoge[j].size();k++) {
          int obj = hoge[j][k].first;
          bool honest = hoge[j][k].second;
          if((kinder[obj-1] == 1 && honest) || (kinder[obj-1] == 0 && !honest)) {
            continue;
          } else {
            ok = false;
            break;
          }
        }
      }

      if(!ok) {
        break;
      }

    }

    if(ok) {
      int num = 0;
      for(int j=0;j<kinder.size();j++) {
        if(kinder[j] == 1) num++;
      }

      if(num > max) max = num;
    }
  }

  cout << max << endl;

}