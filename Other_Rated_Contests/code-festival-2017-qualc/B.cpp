#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  int b = 1;
  for(int i=0;i<n;i++) {
    cin >> a[i];
    if(a[i] % 2 == 0) b *= 2;
  }

  cout << pow(3, n) - b << endl;
}