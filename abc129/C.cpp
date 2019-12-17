#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int main() {
  int N, M;
  cin >> N >> M;
  vector<long long int> a(N+1);
  if (M == 0) {
    a[0] = 1;
    a[1] = 1;
    for(int i=2;i<=N;i++) {
      a[i] = (a[i-1] + a[i-2]) % mod; 
    }

    cout << a[N] << endl;
  } else {
    vector<int> broken(M);
    for(int i=0;i<M;i++) {
      cin >> broken[i];
    }

    int brokenIndex = M-1;
    a[0] = 1;
    if(broken[M-1] == N-1) {
      a[1] = 0;
      brokenIndex--;
    } else {
      a[1] = 1;
    }

    for(int i=2;i<=N;i++) {
      if(brokenIndex == -1) {
        a[i] = (a[i-1] + a[i-2]) % mod;
        continue;
      }
      if(i == N - broken[brokenIndex]) {
        a[i] = 0;
        brokenIndex--;
      } else {
        a[i] = (a[i-1] + a[i-2]) % mod;
      }
    }

    cout << a[N] << endl;
  }

  return 0;
}