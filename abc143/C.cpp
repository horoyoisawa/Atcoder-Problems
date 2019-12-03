  #include <bits/stdc++.h>
  using namespace std;

  int main() {
    int n;
    string s;

    cin >> n >> s;

    int total = 1;

    for(int i=1;i<n;i++) {
      if(s[i] != s[i-1]) {
        total++;
      }
    }

    cout << total << endl;
    return 0;
  }