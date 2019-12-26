#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i=0;i<n;i++) {
    string s;
    cin >> s;

    size_t found = s.find("okyo");
    size_t found2 = s.rfind("ech");

    if(found!=string::npos && found2!=string::npos && found < found2) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}