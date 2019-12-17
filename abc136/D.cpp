#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<int> ans(S.size());

  int start = 0;
  char startStr = 'R';
  bool last = false;

  while(!last) {
    for(int i = start;i<S.size();i++) {
    if(startStr == 'R') {
      if(S[i] == 'R') {
        continue;
      } else {
        int diff = i - start;
        if(diff % 2 == 0) {
          ans[i] += diff / 2;
          ans[i-1] += diff / 2;
        } else {
          ans[i] += diff / 2;
          ans[i-1] += diff / 2 + 1;
        }

        start = i;
        startStr = 'L';
        break;
      }
    } else {
      if(i == S.size() - 1) {
        int diff = S.size() - start;

        if(diff % 2 == 0) {
          ans[start] += diff / 2;
          ans[start-1] += diff / 2;
        } else {
          ans[start] += diff / 2 + 1;
          ans[start-1] += diff / 2;
        }

        last = true;

        break;
      }
      if(S[i] == 'L') {
        continue;
      } else {
        int diff = i - start;
        if(diff % 2 == 0) {
          ans[start] += diff / 2;
          ans[start-1] += diff / 2;
        } else {
          ans[start] += diff / 2 + 1;
          ans[start-1] += diff / 2;
        }

        start = i;
        startStr = 'R';
        break;
      }
    }
  }
  }

  for(int i=0;i<S.size();i++) {
    cout << ans[i] << endl;
  }

  return 0;
}