#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> d(7);
  vector<int> j(7);
  int total = 0;
  for(int i=0;i<7;i++) cin >> d[i];
  for(int i=0;i<7;i++) cin >> j[i];
  for(int i=0;i<7;i++) {
    if(d[i]<j[i]) total += j[i];
    else total += d[i];
  }

  cout << total << endl;
}