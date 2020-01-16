#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

bool customFirst(P p, P q) {
  return (p.first < q.first);
}
bool customSecond(P p, P q) {
  return (p.second < q.second);
}

int main() {
  int n;
  cin >> n;

  vector<P> a(n);
  for(int i=0;i<n;i++) {
    a[i].first = i;
    cin >> a[i].second;
  }

  sort(a.begin(), a.end(), customSecond);

  int last = a[0].second;
  a[0].second = 0;
  for(int i=1;i<n;i++) {
    if(a[i].second == last) a[i].second = a[i-1].second;
    else {
      last = a[i].second;
      a[i].second = a[i-1].second + 1;
    }
  }

  sort(a.begin(), a.end(), customFirst);

  for(int i=0;i<n;i++) {
    cout << a[i].second << endl;
  }
}