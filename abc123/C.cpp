#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int N;
  vector<long long int> abcde(5);
  cin >> N;
  for(int i=0;i<5;i++) {
    cin >> abcde[i];
  }

  long long int mini = *min_element(abcde.begin(), abcde.end());

  long long int longTime = 0;

  if(N % mini == 0) {
    longTime = N / mini; 
  } else {
    longTime = N / mini + 1;
  }

  cout << longTime + 4 << endl;
}