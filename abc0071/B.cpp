#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  map<char, int> counter;
  for(int i=0;i<s.size();i++) {
    counter[s[i]]++;
  }
  vector<char> alphabet(26);
  iota(alphabet.begin(), alphabet.end(), 'a');

  char ans = 'a';
  bool ansExists = false;
  for(int i=0;i<alphabet.size();i++) {
    if(counter[alphabet[i]] == 0) {
      ans = alphabet[i];
      ansExists = true;
      break;
    }
  }

  if(!ansExists) {
    cout << "None" << endl;
  } else {
    cout << ans << endl;
  }
}