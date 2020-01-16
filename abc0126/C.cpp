#include <bits/stdc++.h>
using namespace std;

const double half = 1.0/2.0;

int main() {
  int N, K;
  cin >> N >> K;

  double totalProbability = 0;

  for(int i=1;i<=N;i++) {
    double pro = 1.0 / N;
    if(i >= K) {
      totalProbability += pro;
      continue;
    }
    int total = i;
    while(total < K) {
      pro *= half;
      total = total * 2;
    }

    totalProbability += pro;
  }

  cout << setprecision(20) << totalProbability << endl;
}