#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int total = 0;
  vector<int> time(n);
  for(int i=0;i<n;i++) {
    cin >> time[i];
    total += time[i];
  }
  if(n == 1) cout << total << endl;
  if(n == 2) cout << max(time[0], time[1]) << endl;
  if(n == 3) {
    vector<int> ans(0);
    for(int i=0;i<3;i++) {
      ans.push_back(max(time[i], total - time[i]));
    }

    cout << *min_element(ans.begin(), ans.end()) << endl;
  }
  if(n == 4) {
    vector<int> ans(0);
    for(int i=0;i<4;i++) {
      ans.push_back(max(time[i], total - time[i]));
    }

    for(int i=0;i<4;i++) {
      for(int j=i+1;j<4;j++) {
        ans.push_back(max(time[i]+time[j], total-time[i]-time[j]));
      }
    }

    cout << *min_element(ans.begin(), ans.end()) << endl;
  }
}