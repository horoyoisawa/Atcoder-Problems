#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  for(int i=0;i<N;i++) {
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    s[i] = str;
  }

  sort(s.begin(), s.end());

  int total = 1;
  long long int ans = 0;


  return 0;
}