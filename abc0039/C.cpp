#include <bits/stdc++.h>
using namespace std;

int main() {
  const vector<string> doremi = {"Do", "Do", "Re", "Re", "Mi", "Fa", "Fa", "So", "So", "La", "La", "Si"};
  string a;
  cin >> a;
  int start = 0;
  int end = 0;
  for(int i=1;i<a.size();i++) {
    if(a[i] == a[i-1]) {
      if(start==0) start = i;
      else {
        end = i;
        break;
      }
    }
  }


  if(end - start == 7) {
    if(5-start<0) cout << doremi[17 - start] << endl;
    else cout << doremi[5-start] << endl;
  } else {
    cout << doremi[12-start] << endl;
  }
}