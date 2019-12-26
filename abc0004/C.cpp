#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a = N % 30;
  string b = "123456";
  for(int i=0;i<a;i++) {
    swap(b[i%5], b[i%5+1]);
  }

  cout << b << endl;
}