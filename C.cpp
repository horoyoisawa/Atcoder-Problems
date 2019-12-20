#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  for(int i=0;i<N;i++) cin >> h[i];
  int max = *max_element(h.begin(), h.end());
  int ans = 0;
  for(int i=0;i<max;i++) {
    int length = 0;
    for(int j=0;j<h.size();j++) {
      if(h[j] > i) {
        length++;
      } else {
        if(length>0) {
          ans++;
          length = 0;
        }
      }
    }
    if(length > 0) ans++;
  }
  cout << ans << endl;
}