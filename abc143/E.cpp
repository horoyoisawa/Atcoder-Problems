#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll INF = INT_MAX;

int main() {
  int N, M, L;
  cin >> N >> M >> L;

  vector<vector<ll> > vec1(N, vector<ll>(N, INF));

  for(int i=0;i<M;i++) {
    int node1;
    int node2;
    int length;

    cin >> node1 >> node2 >> length;

    vec1[node1-1][node2-1] = length;
    vec1[node2-1][node1-1] = length;
  }

  for(int i=0;i<N;i++) {
    for(int j=0;j<N;j++) {
      if(i == j) {
        vec1[i][j] = 0;
      }
    }
  }

  for(int k=0;k<N;k++) {
    for(int i=0;i<N;i++) {
      for(int j=0;j<N;j++) {
        if (vec1[i][j] > vec1[i][k] + vec1[k][j]) {
          vec1[i][j] = vec1[i][k] + vec1[k][j];
        }
      }
    }
  }

  vector<vector<ll> > vec2(N, vector<ll>(N, INF));

  for(int i=0;i<N;i++) {
    for(int j=0;j<N;j++) {
      if(vec1[i][j] <= L) {
        vec2[i][j] = 1;
      }
      if(i == j) {
        vec2[i][j] = 0;
      }
    }
  }

  for(int k=0;k<N;k++) {
    for(int i=0;i<N;i++) {
      for(int j=0;j<N;j++) {
        if (vec2[i][j] > vec2[i][k] + vec2[k][j]) {
          vec2[i][j] = vec2[i][k] + vec2[k][j];
        }
      }
    }
  }

  int Q;
  cin >> Q;

  for(int k=0;k<Q;k++) {
    int i, j;
    cin >> i >> j;

    if(vec2[i-1][j-1] < INF) {
      cout << vec2[i-1][j-1] - 1 << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}