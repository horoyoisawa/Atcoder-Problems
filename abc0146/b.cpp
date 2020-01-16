#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<char> alphabet(26);
  iota(alphabet.begin(), alphabet.end(), 'A');

  int N;
  string S;
  cin >> N >> S;

  for(int i=0;i<S.size();i++) {
    int index = 0;
    for(int j=0;j<26;j++) {
      if(alphabet[j] == S[i]) {
        index = j;
        break;
      }
    }

    cout << alphabet[(index + N) % 26];
  }

  cout << endl;

  return 0;
}