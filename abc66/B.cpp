#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int max = 0;

  for(int i=1;i<s.size()/2;i++) {
    string str = s.substr(0, i);
    string secondStr = s.substr(i, i);

    if(str == secondStr) {
      max = i;
    }
  }

  cout << max * 2 << endl;

  
}