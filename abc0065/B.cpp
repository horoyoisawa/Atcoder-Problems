#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i=0;i<N;i++) {
    cin >> a[i];
  }

  int index = 0;
  int times = 0;

  for(int i=0;i<N;i++) {
    index = a[index] - 1;
    times++;
    if(index == 1) {
      break;
    }
  }

  if(times == N) {
    times = -1;
  }

  cout << times << endl;
}