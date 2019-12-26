#include <bits/stdc++.h>
using namespace std;

void print(vector<string> a) {
  for(int i=0;i<a.size();i++) cout << a[i] << endl;
}
vector<string> newVec(vector<string> a, vector<string> b) {
  vector<string> result;
  for(int i=0;i<a.size();i++) {
    for(int j=0;j<b.size();j++) {
      result.push_back(a[i]+b[j]);
    }
  }
  return result;
}

int main() {
  int n;
  cin >> n;
  vector<string> a = {"a", "b", "c"};
  vector<string> b = newVec(a, a);
  vector<string> c = newVec(b, a);
  vector<string> d = newVec(b, b);
  vector<string> e = newVec(d, a);
  vector<string> f = newVec(d, b);
  vector<string> g = newVec(d, c);
  vector<string> h = newVec(d, d);
  vector<vector<string>> ans = {a, b, c, d, e, f, g, h};
  print(ans[n-1]);
}