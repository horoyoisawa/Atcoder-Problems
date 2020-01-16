#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, A, B;
  string s;
  cin >> n >> A >> B >> s;

  int yosen = 0;
  int rankB = 1;

  for(int i=0;i<n;i++) {
    if(s[i] == 'a') {
      if(yosen < A + B) {
        cout << "Yes" << endl;
        yosen++;
      } else {
        cout << "No" << endl;
      }
    } else if(s[i] == 'b') {
      if(yosen < A + B && rankB <= B) {
        cout << "Yes" << endl;
        yosen++;
      } else {
        cout << "No" << endl;
      }
      rankB++;
    } else {
      cout << "No" << endl;
    }
  }
}