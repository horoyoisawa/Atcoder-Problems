#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  if(A * N > B) {
    cout << B << endl;
  } else {
    cout << A * N << endl;
  }

  return 0;
}