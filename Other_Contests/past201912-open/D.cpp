#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n);

  for(int i=0;i<n;i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  bool correct = true;

  int x = 0;
  int y = 0;

  if(a[0] != 1) x = 1;
  else if(a[n-1] != n) x = n;

  for(int i=0;i<n;i++) {
    if(a[i] == a[i-1]) {
      correct = false;
      y = a[i];
    }
    if(a[i] == a[i-1] + 2) {
      correct = false;
      x = a[i-1] + 1;
    }
  }

  if(correct) cout << "Correct" << endl;
  else cout << y << " " << x << endl;
}