#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  for(int i=1;i<10;i++) {
    if(N <= i*100 + i * 10 + i) {
      cout << i*100 + i * 10 + i << endl;
      break;
    }
  }
}