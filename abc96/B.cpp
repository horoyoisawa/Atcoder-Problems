#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  vector<int> abc(3);
  cin >> abc[0] >> abc[1] >> abc[2] >> k;

  sort(abc.begin(), abc.end());

  for(int i=0;i<k;i++) {
    abc[2] *= 2;
  }

  cout << abc[0] + abc[1] + abc[2] << endl;

  
}