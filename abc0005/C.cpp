#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  int N;
  cin >> T >> N;
  vector<int> takoyaki(N);
  for(int i=0;i<N;i++) cin >> takoyaki[i];
  int M;
  cin >> M;;
  vector<int> customer(M);
  for(int i=0;i<M;i++) cin >> customer[i];

  if(N < M) cout << "no" << endl;
  else {
    int customerIndex = 0;
    for(int i=0;i<N;i++) {
      if(customerIndex == M) break;
      if(takoyaki[i] <= customer[customerIndex] && customer[customerIndex] <= takoyaki[i] + T) customerIndex++;
    }

    if(customerIndex == M) cout << "yes" << endl;
    else cout << "no" << endl;

  }
}