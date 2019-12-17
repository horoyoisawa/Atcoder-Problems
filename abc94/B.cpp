#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<bool> toll(N+1, false);
  for(int i=0;i<M;i++) {
    int a;
    cin >> a;
    toll[a] = true;
  }

  int cost1 = 0;
  int cost2 = 0;
  for(int i=X;i>=0;i--) {
    if(toll[i]) {
      cost1++;
    }
  }
  for(int i=X;i<N+1;i++) {
    if(toll[i]) {
      cost2++;
    }
  }

  if(cost1 < cost2) {
    cout << cost1 << endl;
  } else {
    cout << cost2 << endl;
  }
}