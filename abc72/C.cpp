#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> counter;

  int max = 0;

  for(int i=0;i<n;i++) {
    int a;
    cin >> a;
    counter[a-1]++;
    if(counter[a-1]>max) max = counter[a-1];
    counter[a+1]++;
    if(counter[a+1]>max) max = counter[a+1];
    counter[a]++;
    if(counter[a]>max) max = counter[a];
  }

  cout << max << endl;

}