#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n, p;
  cin >> n >> p;

  vector<long long int> divisor(0);

  for(int i = 1;i <= sqrt(p); i++) {
    if(p % i == 0) {
      divisor.push_back(i);
      divisor.push_back(p / i);
    }
  }

  sort(divisor.begin(), divisor.end()); 

  long long int nRoot = ceil(pow(p, 1.0/n));

  long long int ans = 1;
  for(int i=0;i<divisor.size();i++) {
    if(divisor[i] > nRoot) break;
    else {
      long long int c = pow(divisor[i], n);
      if(p % c == 0) ans = divisor[i];
    }
  }

  cout << ans << endl;
}