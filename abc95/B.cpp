#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> m(N);
  int total = 0;
  for(int i=0;i<N;i++) {
    cin >> m[i];
    total += m[i];
  }

  X -= total;

  int min = *min_element(m.begin(), m.end());
  cout << N + X / min << endl;
}