#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, int> counter;
  for(int i=0;i<N;i++) {
    int a;
    cin >> a;
    counter[a]++;
  }

  int ans = N;
  for(auto it=counter.begin();it!=counter.end();it++) {
    if(it->second % 2 == 0) ans -= it->second;
    else ans -= it->second - 1;
  }

  cout << ans << endl;
}