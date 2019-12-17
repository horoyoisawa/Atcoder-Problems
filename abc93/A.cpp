#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> counter(3);
  for(int i=0;i<3;i++) {
    if(s[i] == 'a') {
      counter[0]++;
    } else if(s[i] == 'b') {
      counter[1]++;
    } else {
      counter[2]++;
    }
  }

  if(counter[0]==1&&counter[1]==1&&counter[2]==1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}