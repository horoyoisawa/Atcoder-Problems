#include <bits/stdc++.h>
using namespace std;

int main() {
  int deg;
  double dis;
  cin >> deg >> dis;
  vector<string> direction = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N"};

  double vms = dis / 60;

  double vmsAbout = round(vms*10);

  if(vmsAbout <= 2) {
    cout << "C 0" << endl;
  } else {
    double start = 112.5;
    for(int i=0;i<17;i++) {
      if(start + 225 * i > deg) {
        cout << direction[i];
        break;
      }
    }

    cout << " ";

    if(vmsAbout < 16) cout << 1 << endl;
    else if(vmsAbout < 34) cout << 2 << endl;
    else if(vmsAbout < 55) cout << 3 << endl;
    else if(vmsAbout < 80) cout << 4 << endl;
    else if(vmsAbout < 108) cout << 5 << endl;
    else if(vmsAbout < 139) cout << 6 << endl;
    else if(vmsAbout < 172) cout << 7 << endl;
    else if(vmsAbout < 208) cout << 8 << endl;
    else if(vmsAbout < 245) cout << 9 << endl;
    else if(vmsAbout < 285) cout << 10 << endl;
    else if(vmsAbout < 327) cout << 11 << endl;
    else cout << 12 << endl;
  }
}