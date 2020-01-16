#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  vector<int> ans(0);
  ans.push_back(1);
  if(n == 0) cout << 0 << endl;
  else {
    int power = 0;
    while(pow(2, power) < abs(n)) {
      power++;
    }
    if(n < 0 && power % 2 == 0) power++;
    if(n > 0 && power % 2 == 1) power++;

    
  }
}