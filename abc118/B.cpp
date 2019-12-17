#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> food(M);
  vector<vector<int> > like(N, vector<int>(0));
  for(int i=0;i<N;i++) {
    int K;
    cin >> K;
    for(int j=0;j<K;j++) {
      int f;
      cin >> f;
      food[f-1]++;
    }
  }

  int ans = 0;

  for(int i=0;i<M;i++) {
    if(food[i] == N) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;

}