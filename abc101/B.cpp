#include <bits/stdc++.h>
using namespace std;

int totalDigits(int N) {
  if(N == 0) {
    return 0;
  }
  int first = N % 10;
  return first + totalDigits((N - N % 10) / 10);
}
int main() {
  int N;
  cin >> N;
  int total = totalDigits(N);
  if(N % total == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}