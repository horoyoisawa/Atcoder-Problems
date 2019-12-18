#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;

  sort(s.begin(), s.end());
  int times = 1;
  for(int i=0;i<5;i++) {
    bool find = false;
    for(int j=0;j<5;j++) {
      if(times == n)  {
        cout << s[i] << s[j] << endl;
        find = true;
        break;
      }
      times++;
    }
    if(find) break;
  }
}