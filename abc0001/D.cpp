#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> time(n);
  int start = 0;
  int end = 0;

  for(int i=0;i<n;i++) cin >> time[i];

  sort(time.begin(), time.end());

  for(int i=0;i<n;i++) {
    int from = stoi(time[i].substr(0, 4));
    int to = stoi(time[i].substr(5, 4));
    from -= from % 5;
    to += (5 - (to % 5)) % 5;
    if(to % 100 == 60) to += 40; 
    if(i == 0) {
      start = from;
      end = to;
    } else {
      if(from <= end) {
        if(to > end) end = to;
      }
      else {
        cout << setfill('0') << setw(4) << start << "-" << setfill('0') << setw(4) << end << endl;
        start = from;
        end = to;
      }
    }

    if(i == n-1) cout << setfill('0') << setw(4) << start << "-" << setfill('0') << setw(4) << end << endl;
  }
}