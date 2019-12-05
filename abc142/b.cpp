#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> students(N);
  for(int i=0;i<N;i++) {
    cin >> students[i];
  }

  sort(students.begin(), students.end());

  int cannot = N;

  for(int i=0;i<N;i++) {
    if(students[i] < K) {
      continue;
    } else {
      cannot = i;
      break;
    }
  }

  cout << N - cannot << endl;
}