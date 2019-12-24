#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long int> A(n);
  map<long long int, int> count;
  vector<long long int> side(0);
  for(int i=0;i<n;i++) {
    cin >> A[i];
    count[A[i]]++;
    if(count[A[i]] % 2 == 0) side.push_back(A[i]);
  }

  sort(side.rbegin(), side.rend());

  if(side.size() < 2) cout << 0 << endl;
  else cout << side[0] * side[1] << endl;
}