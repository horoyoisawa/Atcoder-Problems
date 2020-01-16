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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int leftUnhappy = 0;
  int rightUnhappy = 0;
  if(s[0] == 'L') leftUnhappy = 1;
  if(s[n-1] == 'R') rightUnhappy = 1;

  int unhappyPair = 0;
  for(int i=1;i<n;i++) {
    if(s[i-1] == 'R' && s[i] == 'L') unhappyPair++;
  }

  if(k <= unhappyPair) {
    unhappyPair -= k;
    cout << n - unhappyPair * 2 - leftUnhappy - rightUnhappy << endl;
  } else {
    cout << n - 1 << endl;
  }
}