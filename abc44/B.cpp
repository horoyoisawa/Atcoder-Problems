#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;
  map<char, int> counter;
  for(int i=0;i<w.size();i++) {
    counter[w[i]]++;
  }

  bool beautiful = true;

  for(auto it = counter.begin();it != counter.end();it++) {
    if(it -> second % 2 == 1) {
      beautiful = false;
      break;
    }
  }

  if(beautiful) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}