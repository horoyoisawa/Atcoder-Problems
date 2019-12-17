#include <bits/stdc++.h>
using namespace std;

int main() {
  int P, Q, R;
  cin >> P >> Q >> R;

  int mini = min(P+Q, P+R);
  int minimini = min(mini, Q+R);

  cout << minimini << endl;

  return 0;
}