#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<string, int>> city(n);
  int total = 0;
  for(int i=0;i<n;i++) {
    cin >> city[i].first >> city[i].second;
    total += city[i].second;
  }

  int half = total / 2;

  string name = "atcoder";
  for(int i=0;i<n;i++) {
    if(city[i].second > half) {
      name = city[i].first;
      break;
    } 
  }

  cout << name << endl;
}