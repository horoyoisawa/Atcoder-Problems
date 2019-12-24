#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int N, M;
  cin >> N >> M;
  if(N==1&&M==1) cout << 1 << endl;
  else if(N==1 || M==1) cout << N*M-2 << endl;
  else cout << (N-2) * (M-2) << endl;
}