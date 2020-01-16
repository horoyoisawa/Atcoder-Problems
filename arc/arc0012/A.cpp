#include <bits/stdc++.h>
using namespace std;

int main() {
  string day;
  cin >> day;
  vector<string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

  if(day == "Saturday" || day == "Sunday") cout << 0 << endl;
  else {
    for(int i=0;i<5;i++) {
      if(day == days[i]) {
        cout << 5 - i << endl;
        break;
      }
    }
  }
}