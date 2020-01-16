#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string p;
  string q;
  for(int i=0;i<n;i++) {
    int a;
    cin >> a;
    p += to_string(a);
  }
  for(int i=0;i<n;i++) {
    int a;
    cin >> a;
    q += to_string(a);
  }
  string r;
  int a = 0;
  int b = 0;
  for(int i=0;i<n;i++) r += to_string(i+1);
  sort(r.begin(), r.end());

  int index = 1;
  do {
    if(r == p) a = index;
    if(r == q) b = index;
    index++;
  } while (next_permutation(r.begin(), r.end()));

  cout << abs(a-b) << endl;
}