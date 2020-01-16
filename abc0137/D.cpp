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
  int n, m;
  cin >> n >> m;

  map<int, multiset<int>> jobs;

  for(int i=0;i<n;i++) {
    int a, b;
    cin >> a >> b;
    jobs[a].emplace(b);
  }

  auto it = jobs.begin();
  long long int ans = 0;
  multiset<int> jobsPool;

  for(int i=1;i<=m;i++) {
    if(it!=jobs.end() && it->first == i) {
      jobsPool.insert(it->second.begin(), it->second.end());
      it++;
    }

    if(jobsPool.empty()) continue;
    else {
      auto p = jobsPool.end();
      auto q = prev(p, 1);
      ans += *q;
      jobsPool.erase(q, p);
    }
  }

  cout << ans << endl;
}