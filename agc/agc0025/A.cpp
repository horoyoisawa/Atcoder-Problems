#include <bits/stdc++.h>
using namespace std;

int totalDigits(int n) {
  int result = 0;
  while(n!=0) {
    result += n % 10;
    n /= 10;
  }

  return result;
}
int main() {
  int n;
  cin >> n;
  int min = INT_MAX;
  for(int i=1;i<=n/2;i++) {
    if(totalDigits(i) + totalDigits(n-i) < min) {
      min = totalDigits(i) + totalDigits(n-i);
    }
  }

  cout << min << endl;
}