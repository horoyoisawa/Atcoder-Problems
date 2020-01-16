#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  int index = 0;
  while(index < s.size()) {
    if(s[index] == 'L') {
      index += 5;
      if(index > s.size()) {
        cout << "<";
      } else {
        cout << "< ";
      }
    } else if(s[index] == 'R') {
      index += 6;
      if(index > s.size()) {
        cout << ">";
      } else {
        cout << "> ";
      }
    } else {
      index += 8;
      if(index > s.size()) {
        cout << "A";
      } else {
        cout << "A ";
      }
    }
  }

  cout << endl;
}