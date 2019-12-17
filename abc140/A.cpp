#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans;

  for(int i=0;i<3;i++) {
    ans *= N;
  }

  cout << N << endl;

  return 0;
}