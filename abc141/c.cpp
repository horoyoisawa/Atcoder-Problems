#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;

  vector<int> a(N);

  for(int i=0;i<Q;i++) {
    int answered;
    cin >> answered;

    a[answered-1]++;
  }

  for(int i=0;i<N;i++) {
    if(K - (Q - a[i]) > 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}