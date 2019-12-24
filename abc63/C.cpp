#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> score(n);
  int total = 0;
  for(int i=0;i<n;i++) {
    cin >> score[i];
    total += score[i];
  }

  sort(score.begin(), score.end());

  if(total % 10 == 0) {
    int point = total;
    for(auto i=0;i<n;i++) {
      if(score[i]%10==0) continue;
      else {
        point = score[i];
        break;
      }
    }
    cout << total - point << endl;
  } else {
    cout << total << endl;
  }
}