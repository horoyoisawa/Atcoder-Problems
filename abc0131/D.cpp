#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

bool custom(P a, P b) {
  return (a.second < b.second);
}
int main() {
  int n;
  cin >> n;

  vector<P> jobs(n);
  for(int i=0;i<n;i++) cin >> jobs[i].first >> jobs[i].second;

  sort(jobs.begin(), jobs.end(), custom);

  int time = 0;

  bool yes = true;

  for(int i=0;i<n;i++) {
    time += jobs[i].first;
    if(time > jobs[i].second) {
      yes = false;
      break;
    }
  }

  if(yes) cout << "Yes" << endl;
  else cout << "No" << endl;
}