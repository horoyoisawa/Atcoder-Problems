#include <bits/stdc++.h>
using namespace std;

int main() {
  int L, R;
  cin >> L >> R;
  vector<int> left(L);
  vector<int> right(R);
  for(int i=0;i<L;i++) cin >> left[i];
  for(int j=0;j<R;j++) cin >> right[j];
  vector<int> pairR(0);
  for(int i=0;i<L;i++) {
    for(int j=0;j<R;j++) {
      if(left[i] == right[j]) {
        vector<int>::iterator it = find(pairR.begin(), pairR.end(), j);
        if(it == pairR.end()) {
          pairR.push_back(j);
          break;
        }
      }
    }
  }

  cout << pairR.size() << endl;
}