#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  while(true) {
    if(index == 0) {
      if(s[index] == 'L') {
        cout << "<";
        index += 5;
      }
      else if(s[index] == 'R') {
        cout << ">";
        index += 6;
      }
      else if(s[index] == 'A') {
        cout << "A";
        index += 8;
      }
    } else {
      if(s[index] == 'L') {
        cout << " <";
        index += 5;
      }
      else if(s[index] == 'R') {
        cout << " >";
        index += 6;
      }
      else if(s[index] == 'A') {
        cout << " A";
        index += 8;
      }      
    }
  }

  cout << endl;
}