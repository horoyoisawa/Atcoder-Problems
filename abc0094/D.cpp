// this solution is not supported by proof.
// So next time, prove the validity of this solutionl.
// ok, I could prove the validity.
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  sort(a.begin(), a.end());

  int last = a[n-1];
  int theOther = 0;

  if(last % 2 == 0) {
    int half = last / 2;
    int minAb = INT_MAX;
    for(int i=0;i<n-1;i++) {
      if(abs(half-a[i]) < minAb) {
        minAb = abs(half-a[i]);
        theOther = a[i];
      }
    }
  } else {
    int half = last / 2;
    int minAb = INT_MAX;
    for(int i=0;i<n-1;i++) {
      if(min(abs(half-a[i]), abs(half+1-a[i])) < minAb) {
        minAb = min(abs(half-a[i]), abs(half+1-a[i]));
        theOther = a[i];
      }
    }
  }

  cout << last << " " << theOther << endl;
}