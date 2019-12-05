#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string a = "Sunny";
  string b = "Cloudy";
  string c = "Rainy";

  if(S == a) {
    cout << b << endl;
  } else if (S == b) {
    cout << c << endl;
  } else {
    cout << a << endl;
  }
  return 0;
}