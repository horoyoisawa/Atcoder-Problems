#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int total = 0;

  int continuous = false;

  for(int i=0;i<N;i++) {
    int a;
    cin >> a;
    if(!continuous && a == i+1) {
      continuous = true;
      total++;
    } else {
      continuous = false;
    }
  }

  cout << total << endl;
}