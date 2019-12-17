#include "../bits/stdc++.h"
using namespace std;

long long int toDecimal(string binary) {
  long long int decimal = 0;

  for(int i=binary.size()-1;i>=0;i--) {
    if(binary[i] == '0') {
      continue;
    } else {
      decimal += pow(2, binary.size()-1-i);
    }
  }

  return decimal;
}

int main() {
  int N;
  const long long int b = 1e9 + 7;
  cin >> N;
  vector<long long int> A(N);
  vector<long long int> binary(60);
  vector<long long int> mod(60);
  for(int i=0;i<mod.size();i++) {
    mod[i] = pow(2, i) % b;
  }

  for(int i=0;i<N;i++) {
    cin >> A[i];
  }

  long long int total = 0;

  for(int i=0;i<N-1;i++) {
    bitset<64> value1(A[i]);
    for(int j=i+1;j<N;j++) {
      bitset<64> value2(A[j]);

      value2 = value1 ^ value2;

      string S = value2.to_string();

      for(int i=0;i<value2.size();i++) {
        binary[i] += value2[value2.size()-1-i];
      }
    }
  }

  for(int i=0;i<binary.size();i++) {
    total += (mod[i] * (binary[i] % b)) % b;
    if(total > b) {
      total = total % b;
    }
  }

  cout << 
}