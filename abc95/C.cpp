#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;

  if(a + b <= 2 * c) {
    cout << a * x + b * y << endl;
  } else {
    int smaller = 0;
    int bigger = 0;
    int pizzaPrice = 0;

    if(x<y) {
      smaller = x;
      bigger = y;
      pizzaPrice = b;
    } else {
      smaller = y;
      bigger = x;
      pizzaPrice = a;
    }
    int total = 0;
    total += 2 * c * smaller;
    if(2 * c < pizzaPrice) {
      total += 2 * c * (bigger - smaller);
    } else {
      total += pizzaPrice * (bigger - smaller);
    }

    cout << total << endl;
  }
}