#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int (i)=0;(i)<(n);(i)++)

const int mod = (int)pow(10, 9) + 7;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> count;
  rep(i, n) {
    cin >> a[i];
    count[a[i]]++;
  }

  bool yes = true;

  if(n % 2 == 0) {
    for(auto it=count.begin(); it!=count.end(); it++) {
      if(it->first % 2 == 0 || it->second != 2) {
        yes = false;
        break;
      }
    }
  } else {
    for(auto it=count.begin(); it!=count.end(); it++) {
      if(it->first == 0) {
        if(it->second == 1) continue;
        else {
          yes = false;
          break;
        }
      } else if(it->first % 2 == 1 || it->second != 2) {
        yes = false;
        break;
      }
    }
  }

  if(yes) {
    long long int ans = 1;
    for(int i=0;i<n/2;i++) {
      ans = (ans * 2) % mod;
    }

    cout << ans << endl;
  } else cout << 0 << endl;
}