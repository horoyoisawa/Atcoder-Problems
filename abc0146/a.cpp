#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int a;

  if (s == "SUN") {
    a = 7;
  } else if (s == "SAT") {
    a = 1;
  } else if (s == "FRI") {
    a = 2;
  } else if (s == "THU") {
    a = 3;
  } else if (s == "WED") {
    a = 4;
  } else if (s == "TUE") {
    a = 5;
  } else if (s == "MON") {
    a = 6;
  }

  cout << a << endl;

  return 0;
}