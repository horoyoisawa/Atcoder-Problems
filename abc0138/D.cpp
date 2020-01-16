#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int (i)=0;(i)<(n);(i)++)

typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<long long int> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long int>> vvll;


int main() {
  int n, q;
  cin >> n >> q;

  vpii v(n-1);
  vvi close(n);
  vi counter(n);
  vi ans(n);

  rep(i, n-1) {
    cin >> v[i].first >> v[i].second;
    v[i].first--;
    v[i].second--;
    close[v[i].first].emplace_back(v[i].second);
    close[v[i].second].emplace_back(v[i].first);
  }

  rep(i, q) {
    int p;
    int x;
    cin >> p >> x;
    p--;
    counter[p] += x;
  }

  vb used(n, false);
  queue<pii> que;
  que.emplace(make_pair(0, 0));

  while(!que.empty()) {
    pii p = que.front();que.pop();
    ans[p.first] = p.second + counter[p.first];

    rep(i, close[p.first].size()) {
      if(used[close[p.first][i]]) continue;
      else que.push(make_pair(close[p.first][i], ans[p.first]));
    }

    used[p.first] = true;
  }

  rep(i, n) cout << ans[i] << endl;

  return 0;
}