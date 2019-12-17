#include <bits/stdc++.h>
using namespace std;

int total(int n) {
  if(n == 0) {
    return 0;
  }
  int first = n % 10;
  return first + total((n - first) / 10);
}
int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int answer = 0;

  for(int i=1;i<=n;i++) {
    int digit = total(i);
    if(digit >= a && digit <= b) {
      answer += i;
    }
  }

  cout << answer << endl;
}