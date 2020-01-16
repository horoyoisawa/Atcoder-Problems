#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long int total = 0;
  vector<int> vec(0);
  for(int i=0;i<n;i++) {
    int a;
    cin >> a;

    if(vec.empty()) vec.push_back(a);
    else {
      if(vec[vec.size()-1] < a) vec.push_back(a);
      else {
        total += vec.size()*(vec.size()-1) / 2 + vec.size();
        vec.clear();
        vec.push_back(a);
      }
    }

    if(i == n-1) {
      total += vec.size() * (vec.size() - 1) / 2 + vec.size();
      vec.clear();
    }
  }

  cout << total << endl;
}