#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  string y;
  cin >> x >> y;

  int X = stoi(x, nullptr, 16);
  int Y = stoi(y, nullptr, 16);

  if(X>Y) {
    cout << ">" << endl;
  } else if (X == Y) {
    cout << "=" << endl;
  } else {
    cout << "<" << endl; 
  }
}