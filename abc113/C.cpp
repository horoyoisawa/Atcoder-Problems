// まだ解けていません

#include <bits/stdc++.h>
using namespace std;

bool customOne(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b) {
  if(a.second.first != b.second.first) {
    return (a.second.first < b.second.first);
  } else {
    return (a.second.second < b.second.second);
  }
}

bool customTwo(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b) {
  return (a.first < b.first);
}

int main() {
  int n, m;
  cin >> n >> m;
  map<int, pair<int, int>> prefecture;
  for(int i=0;i<m;i++) {
    prefecture[i].first = i;
    cin >> prefecture[i].second.first >> prefecture[i].second.second;
  }

  sort(prefecture.begin(), prefecture.end(), customOne);

  for(auto it=prefecture.begin()+1;it!=prefecture.end();it++) {
    if(it->second.first)
  }

  sort(year.begin(), year.end(), customOne);

  for(int i=0;i<m;i++) {
    cout << setw(6) << setfill('0') << prefecture[i].second;
    cout << setw(6) << setfill('0') << year[i].second << endl;
  }
}