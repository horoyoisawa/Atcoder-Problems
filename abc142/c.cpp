#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> result(N);

  for(int i=0;i<N;i++) {
    int number;
    cin >> number;

    result[number-1] = i+1;
  }

  for(int i=0;i<N;i++) {
    cout << result[i] << endl;
  }

  return 0;
}