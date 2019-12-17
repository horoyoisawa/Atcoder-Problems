#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);

  for(int i=0;i<N;i++) {
    cin >> vec[i];
  }

  int diff = 0;
  for(int i=0;i<N;i++) {
    if(vec[i] == i+1) {
      continue;
    } else {
      diff++;
    }
  }

  if(diff == 0) {
    cout << "YES" << endl;
  } else if (diff == 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}