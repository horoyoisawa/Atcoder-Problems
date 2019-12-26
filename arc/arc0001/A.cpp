#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> vec(5);
  for(int i=0;i<n;i++){
    char ch;
    cin >> ch;
    vec[ch-'0']++;
  }

  sort(vec.begin(), vec.end());

  cout << vec[4] << " " << vec[1] << endl;
}