#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  int total = 0;
  for(int i=0;i<n;i++) {
    cin >> vec[i];
    total += vec[i];
  }

  int half = total / 2;

  int a = 0;
  int halfIndex = 0;

  for(int i=0;i<n;i++) {
    a += vec[i];
    if(a > half) {
      halfIndex = i;
      break;
    }
  }

  int b = a - vec[halfIndex];

  if(abs(total-a-a) > abs(total-b-b)) {
    cout << abs(total-b-b) << endl;
  } else {
    cout << abs(total-a-a) << endl;
  }
}