#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, k;
  cin >> n >> a >> b >> k;
  map<int, int> counter;
  counter[a]++;
  counter[b]++;

  bool yes = true;

  for(int i=0;i<k;i++) {
    int p;
    cin >> p;
    counter[p]++;
    if(counter[p] == 2) {
      yes = false;
      break;
    }
  }

  if(yes) cout << "YES" << endl;
  else cout << "NO" << endl;
}