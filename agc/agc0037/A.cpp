#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string previous;
  string now;
  int total = 0;
  for(int i=0;i<s.size();i++) {
    now += s[i];
    if(now == previous) continue;
    else {
      total++;
      previous = now;
      now = "";
    }
  }

  cout << total << endl;
}