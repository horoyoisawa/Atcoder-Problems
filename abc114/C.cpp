#include <bits/stdc++.h>
using namespace std;

int factorial (int n) {
  if(n == 0) {
    return 1;
  } else if (n == 1) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}

int main() {
  int N;
  cin >> N;
  int copy = N;
  int digits = 0;
  while(copy != 0) {
    copy /= 10;
    digits++;
  }
  if(digits < 3) {
    cout << 0 << endl;
  } else {
    int ans = 0;
    for(int i=3;i<10;i++) {
      if(i == digits) {
        vector<string> vec(0);
        for(int j=0;j<=i-3;j++) {
          for(int k=0;k<=i-3-j;k++) {
            int l = (i-3)-j-k;
            string s1 (j+1, '3');
            string s2 (k+1, '5');
            string s3 (l+1, '7');
            string s = s1 + s2 + s3;
            do {
              vec.push_back(s);
            } while (next_permutation(s.begin(), s.end()));
          }
        }
        sort(vec.begin(), vec.end());
        for(int j=0;j<vec.size();j++) {
          if(stoi(vec[j]) > N) {
            ans += j;
            break;
          }
          if(j == vec.size()-1 && stoi(vec[j]) <= N) ans += vec.size();
        }
        break;
      } else {
        for(int j=0;j<=i-3;j++) {
          for(int k=0;k<=i-3-j;k++) {
            int l = (i-3)-j-k;
            int bunbo = factorial(j+1) * factorial(k+1) * factorial(l+1);
            ans += factorial(i) / bunbo;
          }
        }
      }
    }
    cout << ans << endl;
  }
}