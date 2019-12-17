#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> W(N);
  map<string, int> counter;
  bool yes = true;
  for(int i=0;i<N;i++) {
    cin >> W[i];
    counter[W[i]]++;
    if(i==0) {
    } else {
      if(W[i][0] != W[i-1][W[i-1].size()-1]) {
        yes = false;
        break;
      }
      if(counter[W[i]] == 2) {
        yes = false;
        break;
      }
    }
  }

  if(yes) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}