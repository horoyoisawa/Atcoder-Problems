#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int x;
  cin >> x;

  double solution = (-1 + sqrt(1+8*x)) / 2;

  cout << ceil(solution) << endl;
}