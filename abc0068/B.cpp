#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> twoPower(0);
  for(int i=0;i<10;i++) {
    twoPower.push_back(pow(2, i));
  }
  for(int i=0;i<twoPower.size();i++) {
    if(N < twoPower[i]) {
      cout << twoPower[i-1] << endl;
      break;
    }
  }
}