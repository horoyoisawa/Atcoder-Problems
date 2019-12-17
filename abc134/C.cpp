#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> vec1(N);
  vector<int> vec2(N);

  for(int i=0;i<N;i++) {
    int k;
    cin >> k;
    vec1[i] = k;
    vec2[i] = k;
  }

  sort(vec1.begin(), vec1.end());

  int max = vec1[N-1];
  int secondMax = vec1[N-2];

  int maxIndex = 0;

  for(int i=0;i<N;i++) {
    if(vec2[i] == max) {
      maxIndex = i;
      break;
    }
  }

  for(int i=0;i<N;i++) {
    if(i == maxIndex) {
      cout << secondMax << endl;
    } else {
      cout << max << endl;
    }
  }

  return 0;
}