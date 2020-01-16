#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<string> candidates = {
    "AKIHABARA",
    "KIHABARA",
    "AKIHBARA",
    "AKIHABRA",
    "AKIHABAR",
    "KIHBARA",
    "KIHABRA",
    "KIHABAR",
    "AKIHBRA",
    "AKIHBAR",
    "AKIHABR",
    "AKIHBR",
    "KIHABR",
    "KIHBAR",
    "KIHBRA",
    "KIHBR"
  };

  bool yes = false;
  for(int i=0;i<candidates.size();i++) {
    if(candidates[i] == s) {
      yes = true;
      break;
    }
  }

  cout << (yes ? "YES" : "NO") << endl;
}