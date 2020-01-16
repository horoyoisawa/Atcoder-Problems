#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int*> f(5);

  for(int i=0;i<5;i++) {
    vector<int> vec(5, i);
    int* p = vec.data();
    f[i] = p;
  }

  for(int i=0;i<5;i++) {
    auto it = f[i];
    for(auto j = it;j != it + 5; j++) {
      cout << *it << " ";
    }
    cout << endl;
  }
}