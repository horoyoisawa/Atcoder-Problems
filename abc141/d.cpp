#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> a(N);

  for(int i=0;i<N;i++) {
    cin >> a[i];
  }

  if(N == 1) {
    for(int i=0;i<M;i++) {
      a[0] /= 2;
    }

    cout << a[0] << endl;
    return 0;
  }

  while(M > 0) {
    sort(a.begin(), a.end());
    a[N-1] = a[N-1] / 2;
    M--;
  
    int index = N-1;
    for(int i=0;i<N;i++) {
      if(a[i] > a[N-1]) {
        index = i;
        break;
      }
    }
    int alpha = N - (index + 1);

    if(alpha > M) {
      for(int i=N-2;i>N-M-2;i--) {
        a[i] = a[i] / 2;
      }
      break;
    } else {
      for(int i=N-2;i>=index;i--) {
        a[i] = a[i] / 2;
      }
      M -= alpha;
    }
  }

  long long int total = 0;

  for(int i=0;i<N;i++) {
    total += a[i];
  }

  cout << total << endl;

  return 0;
}