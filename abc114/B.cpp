#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int N = s.size();
  int min = 10000000;
  for(int i=0;i+2<N;i++) {
    string sub = s.substr(i, 3);
    int num = stoi(sub);
    if(abs(num - 753) < min) {
      min = abs(num - 753);
    }
  }

  cout << min << endl;

}