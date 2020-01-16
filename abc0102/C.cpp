#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main() {
  int n;
  cin >> n;
  vi a(n);
  long long int total = 0;
  for(int i=0;i<n;i++) {
    cin >> a[i];
    total += a[i];
  }

  double average = total / n;

  int b = floor(average-(double)(n+1)/2);

  long long int ans1 = 0;
  long long int ans2 = 0;

  for(int i=0;i<n;i++) {
    ans1 += abs(a[i]-b-(i+1));
    ans2 += abs(a[i]-b-(i+2));
  }

  cout << floor(-2.54) << endl;

  cout << min(ans1, ans2) << endl;
}