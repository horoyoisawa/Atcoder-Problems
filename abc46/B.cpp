#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int total = 0;
  for(int i=0;i<n;i++) {
    if(i==0) {
      total = k;
    } else {
      total *= k - 1;
    }
  }

  cout << total << endl;
}