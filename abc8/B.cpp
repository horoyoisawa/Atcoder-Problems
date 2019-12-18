#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> counter;

  int max = 0;
  string name = "soifjo";

  for(int i=0;i<n;i++) {
    string s;
    cin >> s;
    counter[s]++;
    if(counter[s]>max) {
      max = counter[s];
      name = s;
    }
  }

  cout << name << endl;


}