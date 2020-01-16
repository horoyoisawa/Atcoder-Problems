#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int money = 2 * pow(10, 12);

  long long int A;
  int K;
  cin >> A >> K;
  int day = 0;
  if(K == 0) {
    cout << money - A << endl;
  } else {
    while(A<money) {
      A += 1 + K * A;
      day++;
    }
    cout << day << endl;
  }
}