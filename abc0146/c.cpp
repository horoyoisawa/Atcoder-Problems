#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ll A, B, X;
  cin >> A >> B >> X;

  if(X < A + B) {
    cout << 0 << endl;
    return 0;
  }

  int digits = 10;

  for(int i=1;i<10;i++) {
    long long int a = pow(10, i) - 1;
    if(X > a * A + B * i) {
      continue;
    } else {
      digits = i;
      break;
    }
  }

  if(digits == 10) {
    if(X > A * pow(10, 9) + B * 10) {
      cout << setprecision(20) << pow(10, 9) << endl;
    } else {
      cout << setprecision(20) << pow(10, 9) - 1 << endl;
    }

    return 0;
  }
  
  long long int N = (X - B * digits) / A;

  if(N < pow(10, digits-1)) cout << setprecision(20) << pow(10, digits-1) - 1 << endl;
  else cout << setprecision(20) << N << endl;

  return 0;
}