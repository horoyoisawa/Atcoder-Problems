#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  
  long long int sqrtInt = ceil(sqrt(n)) + 1;

  long long int max = n + 1;

  for(int i=1;i<sqrtInt;i++) {
    if (n % i == 0) {
      long long int shou = n / i;
      if (shou + i < max) {
        max = shou + i;
      }
    }
  }

  cout << max - 2 << endl;
}