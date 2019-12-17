#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int L, R;
  cin >> L >> R;

  if(R > L + 2019) {
    R = L + 2019;
  }

  int min = 2019;

  for(long long int i=L;i<R;i++) {
    for(long long int j=i+1;j<=R;j++) {
      long long int value = i * j;
      if(value % 2019 < min) {
        min = value % 2019;
      }
    }
  }

  cout << min << endl;

  return 0;
}