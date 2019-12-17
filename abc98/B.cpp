#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int max = 0;

  for(int i=1;i<N;i++) {
    string x = S.substr(0, i);
    string y = S.substr(i, N-i);

    int total = 0;
    map<char, int> counter;

    for(int j=0;j<x.size();j++) {
      for(int k=0;k<y.size();k++) {
        if(x[j] == y[k] && counter[x[j]] != 1) {
          total++;
          counter[x[j]]++;
          break;
        }
      }
    }

    if(total > max) {
      max = total;
    }
  }

  cout << max << endl;
}