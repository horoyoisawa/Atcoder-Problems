#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int (i)=0;(i)<(n);(i)++)

typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<long long int> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long int>> vvll;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int left = 0;
  int right = 0;
  rep(i, n) {
    if(s[i] == '(') right++;
    if(s[i] == ')') right--;

    if(right < 0) {
      left++;
      right = 0;
    }
  }

  rep(i, left) cout << '(';
  cout << s;
  rep(i, right) cout << ')';
  cout << endl;
}