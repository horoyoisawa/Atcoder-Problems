#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int a;
  cin >> n >> a;

  cout << min((a%3==0?a/3:a/3+1), n/3) << " " << min(a, n/3) << endl;
}