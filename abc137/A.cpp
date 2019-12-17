#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  vector<int> vec({A + B, A - B, A * B});

  cout << *max_element(vec.begin(), vec.end()) << endl;
}