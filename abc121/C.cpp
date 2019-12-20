#include <bits/stdc++.h>
using namespace std;

bool custom(pair<long long int, long long int> p, pair<long long int, long long int> q) {
    return (p.first < q.first);
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<pair<long long int, long long int>> drink(n);

  for(int i=0;i<n;i++) {
    cin >> drink[i].first >> drink[i].second;
  }

  sort(drink.begin(), drink.end(), custom);

  int bottle = 0;
  long long int answer = 0;
  for(int i=0;i<n;i++) {
    if(bottle+drink[i].second>m) {
      answer += drink[i].first * (m - bottle);
      break;
    } else {
      bottle += drink[i].second;
      answer += drink[i].first * drink[i].second;
    }
  }

  cout << answer << endl;
}