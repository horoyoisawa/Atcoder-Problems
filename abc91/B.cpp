#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  vector<string> s(n);
  map<string, int> counter1;
  map<string, int> counter2;

  for(int i=0;i<n;i++) {
    cin >> s[i];
    counter1[s[i]]++;
  }
  cin >> m;
  vector<string> t(m);
  for(int i=0;i<m;i++) {
    cin >> t[i];
    counter2[t[i]]++;
  }

  int max = 0;

  for(auto it = counter1.begin();it!=counter1.end();it++) {
    it->second -= counter2[it->first];
    if(it->second > max) {
      max = it->second;
    }
  }

  cout << max << endl;
}