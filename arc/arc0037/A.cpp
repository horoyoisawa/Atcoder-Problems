#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int total = 0;
  for(int i=0;i<n;i++) {
    int m;
    cin >> m;
    if(m < 80) total += 80 - m;
  }

  cout << total << endl;
}