#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i=0;i<N;i++) {
    cin >> d[i];
  }
  sort(d.begin(), d.end());

  int a = d[N/2-1];
  int b = d[N/2];
  
  cout << b - a << endl;

  return 0;
}