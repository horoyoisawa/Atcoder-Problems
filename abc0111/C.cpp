#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> counter1(100000+1, 0);
  vector<int> counter2(100000+1, 0);
  int mode1 = 0;
  int maxCount1 = 0;
  int mode2 = 0;
  int maxCount2 = 0;
  for(int i=0;i<n;i++) {
    cin >> v[i];
    if(i%2==0) {
      counter1[v[i]]++;
      if(maxCount1 < counter1[v[i]]) {
        mode1 = v[i];
        maxCount1 = counter1[v[i]];
      }
    } else {
      counter2[v[i]]++;
      if(maxCount2 < counter2[v[i]]) {
        mode2 = v[i];
        maxCount2 = counter2[v[i]];
      }
    }
  }
  if(mode1 == mode2) {
    sort(counter1.rbegin(), counter1.rend());
    sort(counter2.rbegin(), counter2.rend());
    int ans1 = n - counter1[0] - counter2[1];
    int ans2 = n - counter2[0] - counter1[1];
    if(ans1<ans2) cout << ans1 << endl;
    else cout << ans2 << endl;
  } else {
    cout << n - maxCount1 - maxCount2 << endl;
  }

  return 0;
}