#include <bits/stdc++.h>
using namespace std;

const int mod = (int)pow(10, 9) + 7;
int main() {
  int n;
  cin >> n;
  vector<long long int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  sort(a.begin(), a.end());
  vector<long long int> b(n-1);
  for(int i=0;i<n-1;i++) b[i] = a[i+1] - a[i];
  vector<long long int> bk(n-k+1);
  for(int i=0;i<n-k+1;i++) bk[i] = a[k+i-1] - a[i];

  long long int total = 0;
  for(int i = 0;i<n-k+1;i++) {
    
  }
}