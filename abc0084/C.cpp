#include <bits/stdc++.h>
using namespace std;

int time (int t, int c, int s, int f) {
  if(t < s) {
    return s - t + c;
  } else {
    int wait = 0;
    for(int i=0;i<f;i++) {
      if((t+i)%f==0) {
        wait = i;
        break;
      }
    }
    return wait + c;
  }
}

int main() {
  int n;
  cin >> n;
  vector<tuple<int, int, int>> train(n-1);

  for(int i=0;i<n-1;i++) {
    int a, b, c;
    cin >> a >> b >> c;
    tuple<int, int, int> t = make_tuple(a, b, c);

    train[i] = t;
  }
  for(int i=0;i<n-1;i++) {
    int result = 0;
    for(int j=i;j<n-1;j++) {
      result += time(result, get<0>(train[j]), get<1>(train[j]), get<2>(train[j]));
    }
    cout << result << endl;
  }

  cout << 0 << endl;
}