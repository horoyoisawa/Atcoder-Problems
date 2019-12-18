#include <bits/stdc++.h>
using namespace std;

int main() {
  pair<int, int> drone;
  string s;
  int t;
  cin >> s >> t;

  int hatena = 0;

  for(int i=0;i<s.size();i++) {
    if(s[i] == 'L') drone.first--;
    else if(s[i] == 'R') drone.first++;
    else if(s[i] == 'U') drone.second++;
    else if(s[i] == 'D') drone.second--;
    else hatena++;
  }

  int max = abs(drone.first) + abs(drone.second) + hatena;

  int min = 0;

  if(abs(drone.first)+abs(drone.second) > hatena) min = abs(drone.first) + abs(drone.second) - hatena;
  else {
    int diff = hatena - abs(drone.first) - abs(drone.second);
    if(diff%2==0) {
      min = 0;
    } else {
      min = 1;
    }
  }

  if(t == 1) cout << max << endl;
  else cout << min << endl;
}