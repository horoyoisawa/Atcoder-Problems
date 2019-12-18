#include <bits/stdc++.h>
using namespace std;

int main() {
  string sa, sb, sc;
  cin >> sa >> sb >> sc;

  reverse(sa.begin(), sa.end());
  reverse(sb.begin(), sb.end());
  reverse(sc.begin(), sc.end());

  char person = 'a';
  char winner = 'A';
  while(true) {
    if(person == 'a') {
      if(sa.size() == 0) {
        winner = 'A';
        break;
      }
      person = sa[sa.size()-1];
      sa.pop_back();
    } else if(person == 'b') {
      if(sb.size() == 0) {
        winner = 'B';
        break;
      }
      person = sb[sb.size()-1];
      sb.pop_back();
    } else {
      if(sc.size() == 0) {
        winner = 'C';
        break;
      }
      person = sc[sc.size()-1];
      sc.pop_back();
    }
  }

  cout << winner << endl;
}