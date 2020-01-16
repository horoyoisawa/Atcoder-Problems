#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int start = 0;
  vector<string> words(0);

  for(int i=0;i<s.size();i++) {
    if(i == start) continue;
    else if(s[i] - 'A' < 26) {
      string sub = s.substr(start, i - start + 1);
      transform(sub.begin(), sub.end(), sub.begin(), ::tolower);
      words.push_back(sub);
      start = i + 1;
    }
  }

  sort(words.begin(), words.end());

  for(int i=0;i<words.size();i++) {
    for(int j=0;j<words[i].size();j++) {
      if(j == 0 || j == words[i].size()-1) cout << (char)(words[i][j] - 32);
      else cout << words[i][j];
    }
  }
  cout << endl;
}