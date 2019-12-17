#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  map<int, int> counter1;
  map<int, int> counter2;
  for(int i=0;i<n;i++) {
    cin >> v[i];
    if(i%2==0) {
      counter1[v[i]]++;
    } else {
      counter2[v[i]]++;
    }
  }

  int max1 = 0;
  int secondMax1 = 0;
  int value1 = -1;
  int max2 = 0;
  int secondMax2 = 0;
  int value2 = -1;

  for(auto vi = counter1.cbegin(); vi != counter1.cend(); ++vi) {
    if(vi->second > max1) {
      secondMax1 = max1;
      max1 = vi->second;
      value1 = vi->first;
    }
  }
  for(auto vi=counter2.cbegin(); vi != counter2.cend(); ++vi) {
    if(vi->second > max2) {
      secondMax2 = max2;
      max2 = vi->second;
      value2 = vi->first;
    }
  }

  if(value1 == value2) {
    int a = n - max1 - secondMax2;
    int b = n - max2 - secondMax1;
    if(a>b) {
      cout << b << endl;
    } else {
      cout << a << endl;
    }
  } else {
    cout << n - max1 - max2 << endl;
  }
}