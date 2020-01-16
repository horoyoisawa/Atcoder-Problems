#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<string, long long int> anagramCounter;

  for(int i=0;i<N;i++) {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    anagramCounter[s]++;
  }
  long long int total = 0;
  for(auto i=anagramCounter.begin();i!=anagramCounter.end();i++) {
    total += i->second * (i->second-1) / 2; 
  }

  cout << total << endl;
  return 0;
}