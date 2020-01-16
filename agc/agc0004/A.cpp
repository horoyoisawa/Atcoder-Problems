#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a, b, c;
  cin >> a >> b >> c;
  if(a % 2 == 0 || b % 2 == 0 || c % 2 == 0) cout << 0 << endl;
  else {
    vector<long long int> vec = {a * b, b * c, c * a};
    cout << *min_element(vec.begin(), vec.end()) << endl;
  }
}