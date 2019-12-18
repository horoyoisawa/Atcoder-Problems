#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec1(3);
  for(int i=0;i<3;i++) {
    cin >> vec1[i];
  }
  vector<int> vec2 = vec1;
  sort(vec2.begin(), vec2.end());
  for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
      if(vec1[i] == vec2[j]) {
        cout << 3 - j << endl;
        break;
      }
    }
  }
}