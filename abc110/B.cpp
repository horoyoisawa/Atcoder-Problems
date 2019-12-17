#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;
  vector<int> x(N);
  vector<int> y(M);

  for(int i=0;i<N;i++) {
    cin >> x[i];
  }

  for(int i=0;i<M;i++) {
    cin >> y[i];
  }

  if(X >= Y) {
    cout << "War" << endl;
  } else {

    int max = *max_element(x.begin(), x.end());
    int min = *min_element(y.begin(), y.end());

    bool war = true;
    for(int i=max+1;i<=min;i++) {
      if(i > X && i <= Y) {
        war = false;
        break;
      }
    }

    if(war) {
      cout << "War" << endl;
    } else {
      cout << "No War" << endl;
    }

    return 0;
  }
}