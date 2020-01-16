#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> AC(pow(10, 5)+1);
  vector<int> penalty(pow(10, 5)+1);

  int ACnum = 0;
  int WAnum = 0;

  for(int i=0;i<m;i++) {
    int a;
    string s;
    cin >> a >> s;
    if(AC[a]) continue;
    if(s == "AC") {
      AC[a] = true;
      ACnum++;
      WAnum += penalty[a];
    }
    if(s == "WA") penalty[a]++;
  }

  cout << ACnum << " " << WAnum << endl;
}