#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  int minCost = 1001;
  for(int i=0;i<N;i++){
    int c, t;
    cin >> c >> t;
    if(t > T) {
      continue;
    } else {
      if(c < minCost) {
        minCost = c;
      }
    }
  }

  if(minCost == 1001) {
    cout << "TLE" << endl;
  } else {
    cout << minCost << endl;
  }
}