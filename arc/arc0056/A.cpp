#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a, b, k, l;
  cin >> a >> b >> k >> l;
  int pack = k / l;
  long long int ans1 = a * (k % l) + pack * b;
  long long int ans2 = b * (pack + 1);

  cout << min(ans1, ans2) << endl;
}