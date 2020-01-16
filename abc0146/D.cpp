#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P

int main() {
  int n;
  cin >> n;

  vector<int> frequency(n+1);
  vector<P> input(n-1);
  for(int i=0;i<n;i++) {
    cin >> input[i].first >> input[i].second;
    frequency[input[i].first]++;
    frequency[input[i].second]++;
  }

  int k = *max_element(frequency);

  cout << k << endl;

  vector<int*> f(n+1);

  
}