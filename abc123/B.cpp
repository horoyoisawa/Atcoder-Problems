#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  for(int i=0;i<5;i++) {
    cin >> a[i];
  }
  int min = 10000000;
  do {
    int time = 0;
    for(int i=0;i<5;i++) {
      if(time % 10 == 0) {
        time += a[i];
      } else {
        int b = time + 10 - time % 10;
        time = b + a[i];
      }
    }
    if(time < min) {
      min = time;
    }
  } while ( next_permutation(a.begin(), a.end()) );

  cout << min << endl;

}