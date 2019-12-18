#include <bits/stdc++.h>
using namespace std;

int main() {
  char x;
  cin >> x;

  vector<char> alphabet(26);
  iota(alphabet.begin(), alphabet.end(), 'A');

  int index = 0;

  for(int i=0;i<26;i++) {
    if(alphabet[i] == x) {
      index = i + 1;
      break;
    }
  }

  cout << index << endl;
}