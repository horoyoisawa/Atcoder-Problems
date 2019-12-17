#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long int> lucas(87);

  lucas[0] = 2;
  lucas[1] = 1;

  for(int i=2;i<lucas.size();i++) {
    lucas[i] = lucas[i-1] + lucas[i-2];
  }

  cout << lucas[n] << endl;

}