#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;

  map<string, int> counter;

  for(int i=0;i<(int)s.size()-k+1;i++) {
    string sub = s.substr(i, k);
    counter[sub]++;
  }

  cout << counter.size() << endl;
}