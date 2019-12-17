#include <bits/stdc++.h>
using namespace std;

int main() {
  bool yymm = true;
  bool mmyy = true;

  string s;
  cin >> s;
  string former = s.substr(0, 2);
  string latter = s.substr(2, 2);

  int a = stoi(former);
  int b = stoi(latter);

  if(a > 12 || a == 0) {
    mmyy = false;
  }

  if(b > 12 || b == 0) {
    yymm = false;
  }

  if(yymm && mmyy) {
    cout << "AMBIGUOUS" << endl;
  } else if(yymm) {
    cout << "YYMM" << endl;
  } else if(mmyy) {
    cout << "MMYY" << endl;
  } else {
    cout << "NA" << endl;
  }
}