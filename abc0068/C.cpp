#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> fromOne(0);
  vector<int> toN(0);
  for(int i=0;i<m;i++) {
    int a, b;
    cin >> a >> b;
    if(a == 1) fromOne.push_back(b);
    if(b == n) toN.push_back(a);
  }

  sort(fromOne.begin(), fromOne.end());
  sort(toN.begin(), toN.end());

  vector<int> intersection;

  set_intersection(fromOne.begin(), fromOne.end(), toN.begin(), toN.end(), back_inserter(intersection));

  if(intersection.size()) {
    cout << "POSSIBLE" << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
}