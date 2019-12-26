#include <bits/stdc++.h>
using namespace std;

int main() {
  int num = 0;
  for(int i=0;i<12;i++) {
    string s;
    cin >> s;
    for(int j=0;j<s.size();j++) {
      if(s[j] == 'r') {
        num++;
        break;
      }
    }
  }

  cout << num << endl;
}