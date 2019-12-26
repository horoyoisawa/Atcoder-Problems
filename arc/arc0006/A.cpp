#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> win(6);
  vector<int> takahashi(6);
  for(int i=0;i<6;i++) cin >> win[i];
  int bonus = 0;
  cin >> bonus;
  for(int i=0;i<6;i++) cin >> takahashi[i];
  vector<int> result;
  set_intersection(win.begin(), win.end(), takahashi.begin(), takahashi.end(), back_inserter(result));

  if(result.size() == 6) cout << 1 << endl;
  else if(result.size() == 5) {
    vector<int> diff;
    set_difference(takahashi.begin(), takahashi.end(), result.begin(), result.end(), back_inserter(diff));
    if(diff[0] == bonus) cout << 2 << endl;
    else cout << 3 << endl;
  } else if(result.size() == 4) cout << 4 << endl;
  else if(result.size() == 3) cout << 5 << endl;
  else cout << 0 << endl;
}