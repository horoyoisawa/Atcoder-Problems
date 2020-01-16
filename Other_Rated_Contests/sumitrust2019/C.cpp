#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  int a = x % 100;

  int b = a / 5;

  int lower = 0;

  if(a == 0) lower = 100;
  else if(a % 5 == 0) lower = 105 * b;
  else if(a % 5 == 1) lower = 105 * b + 101;
  else if(a % 5 == 2) lower = 105 * b + 102;
  else if(a % 5 == 3) lower = 105 * b + 103;
  else if(a % 5 == 4) lower = 105 * b + 104;

  cout << (x < lower ? 0 : 1) << endl;
}