#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  double sq = sqrt(N);

  cout << setprecision(20) << floor(sq) * floor(sq) << endl;
}