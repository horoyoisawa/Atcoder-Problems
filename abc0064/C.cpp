// I totally forgot the casse that all n people's rates are more than 3200 and then the minimal colors are one.
// if you try to output the length of counter, it will bi wrong. (the above case is the only countercase).

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, int> counter;

  int exception = 0;

  for(int i=0;i<n;i++) {
    int rate;
    cin >> rate;
    if(rate<400) counter["gray"]++;
    else if(rate<800) counter["brown"]++;
    else if(rate<1200) counter["green"]++;
    else if(rate<1600) counter["skyBlue"]++;
    else if(rate<2000) counter["blue"]++;
    else if(rate<2400) counter["yellow"]++;
    else if(rate<2800) counter["orange"]++;
    else if(rate<3200) counter["red"]++;
    else exception++;
  }
  if(counter.size()==0) {
    cout << 1 << " ";
  } else {
    cout << counter.size() << " ";
  }
  

  cout << counter.size() + exception << endl;

}