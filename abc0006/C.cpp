#include <bits/stdc++.h>
using namespace std;

int total(vector<int> &a) {
  int res = 0;
  for(int i=0;i<a.size();i++) res += a[i];
  return res;
}

void out(vector<int> &a) {
  for(int i=0;i<a.size();i++) cout << a[i] << " ";
  cout << endl;
}

int main() {
  int N, M;
  cin >> N >> M;

  if(M - 2*N < 0) cout << "-1 -1 -1" << endl;
  else {
    int alpha;
    int beta;
    if((M - 2 * N) % 2 == 0) {
      alpha = beta = (M - 2 * N) / 2;
    } else {
      alpha = (M - 2 * N) / 2;
      beta = alpha + 1;
    }

    if(beta <= N) {
      int n = alpha;
      int m = beta - alpha;
      int l = N - beta;

      cout << l << " " << m << " " << n << endl;
    } else {
      cout << "-1 -1 -1" << endl; 
    }
  }
}