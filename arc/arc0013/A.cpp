#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l;
  int p, q, r;

  cin >> n >> m >> l >> p >> q >> r;

  int a = n / p;
  int b = n / q;
  int c = n / r;
  int d = m / p;
  int e = m / q;
  int f = m / r;
  int g = l / p;
  int h = l / q;
  int i = l / r;

  int ans1 = a * e * i;
  int ans2 = a * f * h;
  int ans3 = b * d * i;
  int ans4 = b * f * g;
  int ans5 = c * d * h;
  int ans6 = c * e * g;

  vector<int> ans = {ans1, ans2, ans3, ans4, ans5, ans6};
  cout << *max_element(ans.begin(), ans.end()) << endl;
}