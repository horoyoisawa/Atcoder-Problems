#include "../bits/stdc++.h"
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<double> v(N);

  for(int i=0;i<N;i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  double start = v[0];

  for(int i=1;i<N;i++) {
    start = (start + v[i]) / 2;
  }

  cout << start << endl;

  return 0;
}