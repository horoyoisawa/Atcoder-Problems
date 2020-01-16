#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n == 1) cout << "Not Prime" << endl;
  else if(n == 2 || n == 3 || n == 5) cout << "Prime" << endl;
  else if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0) cout << "Not Prime" << endl;
  else cout << "Prime" << endl;
}