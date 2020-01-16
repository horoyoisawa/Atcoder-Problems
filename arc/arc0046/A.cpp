#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = (n-1) / 9;
  int b = n % 9;
  if(b == 0) b = 9;

  for(int i=0;i<a+1;i++) {
    cout << b;
  }

  cout << endl;
}