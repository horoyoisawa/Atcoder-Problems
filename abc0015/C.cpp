#include <bits/stdc++.h>
using namespace std;

vector<int> BaseConversion(int a, int base, int size) {
  vector<int> res(size);
  for(int i=size-1;i>=0;i--) {
    res[i] = a / (int)pow(base, i);
    a %= (int)pow(base, i);
  }

  return res;
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<vector<int>> q(n, vector<int>(k));

  for(int i=0;i<n;i++) {
    for(int j=0;j<k;j++) {
      cin >> q[i][j];
    }
  }

  bool found = false;

  for(int i=0;i<pow(k, n);i++) {
    vector<int> vec = BaseConversion(i, k, n);
    int result = 0;
    for(int j=0;j<vec.size();j++) {
      result = result ^ q[j][vec[j]];
    }

    if(result == 0) {
      found = true;
      break;
    }
  }

  if(found) cout << "Found" << endl;
  else cout << "Nothing" << endl;
}