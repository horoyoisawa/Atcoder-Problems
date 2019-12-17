#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  string s = to_string(a);
  string t = to_string(b);

  string r = s + t;
  int c = stoi(r);

  double sq = sqrt(c);

  if(sq == floor(sq)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}