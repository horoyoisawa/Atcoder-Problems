#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if(a%b==0) return b;
  else return gcd(b, a%b);
}

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> dist(N);
  for(int i=0;i<N;i++) {
    int a;
    cin >> a;
    dist[i] = abs(a-X);
  }

  int ans = 0;
    for(int i=0;i<N;i++) {
      if(i==0) ans = dist[i];
      else {
        if(ans>dist[i]) ans = gcd(ans, dist[i]);
        else ans = gcd(dist[i], ans);
      }
    }

  cout << ans << endl;
}