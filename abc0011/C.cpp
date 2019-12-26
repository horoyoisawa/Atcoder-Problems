#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ng(3);
  for(int i=0;i<3;i++) {
    cin >> ng[i];
  }

  if(ng[0] == n || ng[1] == n || ng[2] == n) {
    cout << "NO" << endl;
  } else {
    sort(ng.begin(), ng.end());
    if(ng[2]<n && ng[2]==ng[1]+1 && ng[1]==ng[0]+1) {
      cout << "NO" << endl;
    } else {
      int times = 0;
      while(n > 0) {
        if(distance(ng.begin(), find(ng.begin(), ng.end(), n-3)) == 3) {
          n -= 3;
          times++;
        } else if(distance(ng.begin(), find(ng.begin(), ng.end(), n-2)) == 3) {
          n -= 2;
          times++;
        } else if(distance(ng.begin(), find(ng.begin(), ng.end(), n-1)) == 3) {
          n--;
          times++;
        }
      }

      if(times> 100) {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl; 
      }
    }
  }
}