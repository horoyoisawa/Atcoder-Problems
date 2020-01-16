#include <bits/stdc++.h>
using namespace std;

int main() {
  char a, b, c, d;
  cin >> a >> b >> c >> d;
  int A = a - '0';
  int B = b - '0';
  int C = c - '0';
  int D = d - '0';

  char op1 = '+';
  char op2 = '-';
  char op3 = '+';

  for(int i=0;i<8;i++) {
    bitset<8> op(i);
    int total = A;
    if(op[0]) {
      op1 = '+';
      total += B;
    } else {
      op1 = '-';
      total -= B;
    }
    if(op[1]) {
      op2 = '+';
      total += C;
    } else {
      op2 = '-';
      total -= C;
    }
    if(op[2]) {
      op3 = '+';
      total += D;
    } else {
      op3 = '-';
      total -= D;
    }
    if(total == 7) {
      break;
    }
  }
  cout << A << op1 << B << op2 << C << op3 << D << "=7" << endl;
}