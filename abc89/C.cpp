#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<long long int> counter(5);
  for(int i=0;i<N;i++) {
    cin >> S[i];
    if(S[i][0] == 'M') counter[0]++;
    else if(S[i][0] == 'A') counter[1]++;
    else if(S[i][0] == 'R') counter[2]++;
    else if(S[i][0] == 'C') counter[3]++;
    else if(S[i][0] == 'H') counter[4]++;
  }

  long long int total = 0;
    for(int i=0;i<counter.size();i++) {
      for(int j=i+1;j<counter.size();j++) {
        for(int k=j+1;k<counter.size();k++) {
          total += counter[i] * counter[j] * counter[k];
        }
      }
    }

    cout << total << endl;
}