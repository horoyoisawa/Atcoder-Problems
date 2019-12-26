#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int total = 0;
  for(int i=0;i<n;i++) {
    string s;
    cin >> s;
    if(i == n-1 && (s == "TAKAHASHIKUN." || s == "Takahashikun." || s == "takahashikun.")) total++;
    if(s == "TAKAHASHIKUN" || s == "Takahashikun" || s == "takahashikun") total++;
  }

  cout << total << endl;
}