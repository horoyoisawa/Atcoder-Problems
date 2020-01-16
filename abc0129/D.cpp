#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int (i)=0;(i)<(n);(i)++)

typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<long long int> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<long long int>> vvll;

int main() {
  int h, w;
  cin >> h >> w;

  vvc G(h+2, vc(w+2));
  rep(i, w+2) {
    G[0][i] = '#';
    G[h+1][i] = '#';
  }
  for(int i=1;i<=h;i++) {
    G[i][0] = '#';
    for(int j=1;j<=w;j++) {
      cin >> G[i][j];
    }
    G[i][w+1] = '#';
  }

  vvi L(h+2, vi(w+2));
  vvi R(h+2, vi(w+2));
  vvi D(h+2, vi(w+2));
  vvi U(h+2, vi(w+2));

  for(int i=1;i<=h;i++) {
    for(int j=1;j<=w;j++) {
      if(G[i][j] == '.') {
        L[i][j] = L[i][j-1] + 1;
        U[i][j] = U[i-1][j] + 1;
      }
      if(G[h+1-i][w+1-j] == '.') {
        D[h+1-i][w+1-j] = D[h+2-i][w+1-j] + 1;
        R[h+1-i][w+1-j] = R[h+1-i][w+2-j] + 1;
      }
    }
  }

  int max = 0;

  for(int i=1;i<=h;i++) {
    for(int j=1;j<=w;j++) {
      int a = L[i][j]+U[i][j]+D[i][j]+R[i][j] - 3;
      if(a > max) max = a;
    }
  }

  cout << max << endl;
}