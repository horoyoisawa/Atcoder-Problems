#include <bits/stdc++.h>
using namespace std;

int keta(long long int n) {
  int keta = 0;
  while(n != 0) {
    n /= 10;
    keta++;
  }

  return keta;
}

int main() {
  long long int N;
  cin >> N;
  int sq = floor(sqrt(N));
  int ans = 0;
  for(int i=1;i<=sq;i++) {
    if(N % i == 0) {
      ans = keta(N/i);
    }
  }

  cout << ans << endl;
}