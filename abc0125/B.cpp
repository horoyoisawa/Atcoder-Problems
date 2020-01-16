#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> v(N);
  vector<int> c(N);
  for(int i=0;i<N;i++) {
    cin >> v[i];
  }
  int total = 0;
  for(int i=0;i<N;i++) {
    cin >> c[i];
    if(v[i] > c[i]) {
      total += v[i] - c[i];
    }
  }

  cout << total << endl;
  return 0;
}