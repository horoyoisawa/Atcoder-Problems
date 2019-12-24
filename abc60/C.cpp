#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, T;
  cin >> n >> T;
  int limit = 0;
  int notWorking = 0;

  for(int i=0;i<n;i++) {
    int t;
    cin >> t;
    if(limit < t) {
      notWorking += t - limit;
    }

    limit = t + T;
  }

  cout << limit - notWorking << endl;
}