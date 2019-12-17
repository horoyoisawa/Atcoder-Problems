#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int sum = a + b;
  int diff = a - b;
  int mul = a * b;
  vector<int> vec{sum, diff, mul};

  int max = *max_element(vec.begin(), vec.end());

  cout << max << endl;
}