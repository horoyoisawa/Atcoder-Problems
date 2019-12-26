#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int num = 0;
  int max = 0;

  for(int i=0;i<s.size();i++) {
    if(s[i] == 'I') num++;
    if(s[i] == 'D') num--;
    if(num > max) max = num;
  }

  cout << max << endl;
}