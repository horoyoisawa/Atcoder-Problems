#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> height(N);

  for(int i=0;i<N;i++) {
    cin >> height[i];
  }

  int max = 0;
  int start = 0;

  while(start < N-1) {
    int length = 0;
    for(int i = start;i<N-1;i++) {
      if(height[i+1] <= height[i]) {
        length++;
      } else {
        break;
      }
    }

    if(length > max) {
      max = length;
    }

    start = start + length + 1;
  }

  cout << max << endl;

  return 0;
}