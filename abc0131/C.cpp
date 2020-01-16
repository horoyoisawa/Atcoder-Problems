#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
  if(a>b) {
    if(a%b==0) {
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
    long long int A, B, C, D;
    cin >> A >> B >> C >> D;

    long long int lcm = C * D / gcd(C, D);

    long long int numC = 0;
    long long int numD = 0;
    long long int numLcm = 0;

    if(A == B) {
      if(B % C == 0 || B % A == 0) {
        cout << 0 << endl;
      } else {
        cout << 1 << endl;
      }
    } else {
      numC = B / C - (A-1) / C;
      numD = B / D - (A-1) / D;
      numLcm = B / lcm - (A-1) / lcm;

      cout << B - A + 1 - numC - numD + numLcm << endl;
    }

    return 0;
}