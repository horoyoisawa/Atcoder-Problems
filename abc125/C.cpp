#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
  if(a<b) {
    if(b%a==0) {
      return a;
    } else {
      return gcd(a, b%a);
    }
  } else {
    if(a%b==0) {
      return b;
    } else {
      return gcd(b, a%b);
    }
  }
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  int primy = 0;
  for(int i=0;i<N;i++) {
    cin >> A[i];
  }

  int GCD = A[0];

  sort(A.begin(), A.end());

  cout << "test" << endl;
  cout << gcd(8, 7) << endl;

  for(int i=1;i<N;i++) {
    int newGCD = gcd(GCD, A[i]);
    cout << "GCD " << GCD << endl;
    cout << "A[i] " << A[i] << endl;
    cout << "new " << newGCD << endl;
    if(newGCD < GCD) {
      primy = i;
    }
    GCD = newGCD;
  }

  cout << "primy" << primy << endl;

  int ans1 = A[0];

  for(int i=1;i<N;i++) {
    if(i == primy) continue;
    else ans1 = gcd(an1s, A[i]);
  }

  int anoPrimy = primy - 1;
  for(int i=0;i<N;i++) {
    if(i == anoPrimy) continue;
    else ans = gcd()
  }

  cout << ans << endl;
}