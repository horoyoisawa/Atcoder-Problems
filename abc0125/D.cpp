#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  long long int total = 0;
  int minusNum = 0;
  int minAb = INT_MAX;
  for(int i=0;i<n;i++) {
    cin >> A[i];
    total += abs(A[i]);
    if(A[i] < 0) minusNum++;
    if(abs(A[i]) < minAb) minAb = abs(A[i]);
  }
  if(minusNum % 2 == 0) {
    cout << total << endl;
  } else {
    cout << total - minAb * 2 << endl;
  }
}