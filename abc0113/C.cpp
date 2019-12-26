#include <bits/stdc++.h>
using namespace std;

bool customFunctionOne (pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
  if(a.second.first == b.second.first) return (a.second.second < b.second.second);
  else return (a.second.first < b.second.first);
}

bool customFunctionTwo (pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
  return (a.first < b.first);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, pair<int, int>>> py(m);
  for(int i=0;i<m;i++) {
    py[i].first = i+1;
    cin >> py[i].second.first >> py[i].second.second;
  }

  sort(py.begin(), py.end(), customFunctionOne);
  py[0].second.second = 1;
  for(int i=1;i<m;i++) {
    if(py[i].second.first == py[i-1].second.first) py[i].second.second = py[i-1].second.second + 1;
    else py[i].second.second = 1;
  }

  sort(py.begin(), py.end(), customFunctionTwo);

  for(int i=0;i<m;i++) {
    cout << setw(6) << setfill('0') << py[i].second.first;
    cout << setw(6) << setfill('0') << py[i].second.second << endl;
  }
}