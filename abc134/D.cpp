#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i=0;i<N;i++) {
    cin >> a[i];
  }

  vector<int> ball(N);

  int totalBall = 0;
  int h = N / 2;
  for(int i=h;i<N;i++) {
    ball[i] = a[i];
    if(ball[i] == 1) totalBall++;
  }

  for(int i=h-1;i>=0;i--) {
    int num = i+1;
    int total = 0;
    for(int j=i;j<N;j=j+num) {
      total += ball[j];
    }
    int mod2 = total % 2;
    if((mod2 + a[i]) % 2 == 0) {
      ball[i] = 0;
    } else {
      ball[i] = 1;
    }

    totalBall += ball[i];
  }

  cout << totalBall << endl;

  for(int i=0;i<N;i++) {
    if(ball[i] == 1) {
      cout << i+1 << endl;
    }
  }

  return 0;
}