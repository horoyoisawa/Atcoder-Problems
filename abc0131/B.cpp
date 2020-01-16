  #include <bits/stdc++.h>
  using namespace std;

  int main() {
    int N, L;
    cin >> N >> L;
    int total = 0;

    if(L>0) {
      for(int i=2;i<=N;i++) {
        total += L + i - 1;
      }
    } else if (L + N - 1 < 0) {
      for(int i=1;i<=N-1;i++) {
        total += L + i - 1;
      }
    } else {
      for(int i=1;i<=N;i++) {
        int azi = L + i - 1;
        if(azi == 0) {
          continue;
        }
        total += azi;
      }
    }

    cout << total << endl;

    return 0;
  }