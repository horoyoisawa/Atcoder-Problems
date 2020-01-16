#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  vector<char> alphabet(26);
  iota(alphabet.begin(), alphabet.end(), 'a');

  for(int i=0;i<alphabet.size();i++) cout << alphabet[i];

  cout << endl;

  for(int i=0;i<alphabet.size();i++) {
    cout << alphabet[i] << " " << 'z' - alphabet[i] << endl;
  }
}