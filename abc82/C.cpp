#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, int> count;
  for(int i=0;i<N;i++) {
    int a;
    cin >> a;
    count[a]++;
  }

  int total = 0;

  for(auto it=count.begin();it!=count.end();it++) {
    if(it->second == 0) continue;
    if(it->first < it->second) total += it->second - it->first;
    else if(it->first > it->second) total += it->second;
  }

  cout << total << endl;
}