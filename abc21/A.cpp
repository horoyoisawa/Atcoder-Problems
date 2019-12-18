#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n%2==0) {
    int shou = n / 2;
    cout << shou << endl;

    for(int i=0;i<shou;i++) cout << 2 << endl;
  } else {
    int show = n / 2;
    cout << show + 1 << endl;

    for(int i=0;i<show+1;i++) {
      if(i == 0) cout << 1 << endl;
      else cout << 2 << endl;
    }
  }
}