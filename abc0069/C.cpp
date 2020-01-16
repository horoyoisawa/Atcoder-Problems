#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int odd = 0;
  int even = 0;
  int MulOfFour = 0;

  for(int i=0;i<N;i++) {
    int a;
    cin >> a;
    if(a%2==1) odd++;
    else if(a%4==0) MulOfFour++;
    else even++;
  }

  if(odd > MulOfFour + 1) {
    cout << "No" << endl;
  } else if (odd == MulOfFour + 1) {
    if(even == 0) cout << "Yes" << endl;
    else cout << "No" << endl; 
  } else cout << "Yes" << endl;
}