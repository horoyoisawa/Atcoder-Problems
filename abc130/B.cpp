#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> vec(N);

  for(int i=0;i<N;i++) {
    cin >> vec[i];
  }

  int start = 0;

  int times = 0;

  while(start <= X) {
    start += vec[times];
    times++;
  }

  if(times>N+1) {
    cout << N+1 << endl;
  } else {
    cout << times << endl;
  }

  return 0;
}