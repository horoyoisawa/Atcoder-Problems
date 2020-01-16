#include "../bits/stdc++.h"
using namespace std;

const int mod = (int)pow(10, 9) + 7;

int main() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  int n = s.size();
  vector<int> remainder(n);
  vector<int> cycle = {1, 10, 9, 12, 3, 4};

  for(int i=0;i<n;i++) cout << remainder[i] << " ";

  vector<int> hatena(6);
  int sum = 0;

  for(int i=0;i<n;i++) {
    if(s[i] == '?') {
      hatena[i%6]++;
      continue;
    }
    int a = s[i] - '0';
    sum += cycle[i%6] * a;
    sum %=13;
  }

  int hatenaRemainder = (5 - sum < 0 ? 18 - sum : 5 - sum);

  
}