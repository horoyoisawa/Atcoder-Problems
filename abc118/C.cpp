#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if(a>b) {
    if(a%b == 0) {
      return b;
    } else {
      return gcd(b, a%b);
    }
  } else {
    if(b%a==0) {
      return a;
    } else {
      return gcd(a, b%a);
    }
  }
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++) {
    cin >> A[i];
  }

  int GCD = A[0];

  for(int i=1;i<N;i++) {
    GCD = gcd(GCD, A[i]);
  }

  cout << GCD << endl;
  
  return 0;
}