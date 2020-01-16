#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  vector<pair<int, int>> a;
  pair<int, int> handstand;
  for(int i=0;i<s.size();i++) {
    if(i == 0 && s[i] == '1') {
      if(s[i] == '1') handstand.first = i;
      else continue;
    }
    if(s[i-1] == '0' && s[i] == '1') handstand.first = i;
    if(s[i-1] == '1' && s[i] == '0') {
      handstand.second = i;
      a.emplace_back(handstand);
      handstand = make_pair(0, 0);
    }
    if(i == s.size()-1 && s[i] == '1') {
      handstand.second = s.size();
      a.emplace_back()
    }
  }
}