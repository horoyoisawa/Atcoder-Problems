#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int hh = n / 3600;
  int mm = (n % 3600) / 60;
  int ss = n - hh * 3600 - mm * 60;

  string h = to_string(hh);
  string m = to_string(mm);
  string s = to_string(ss);

  if(hh < 10) {
    h = "0" + h;
  }
  if(mm < 10) {
    m = "0" + m;
  }
  if(ss < 10) {
    s = "0" + s;
  }

  cout << h << ":" << m << ":" << s << endl;
}