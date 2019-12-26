#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> primeFactorization(int n) {
  vector<pair<int, int>> result;
  for(int i=2;i<=n;i++) {
    if(n % i != 0) continue;
    int times = 0;
    while(n % i == 0) {
      times++;
      n /= i;
    }
    pair<int, int> p = make_pair(i, times);
    result.push_back(p);
    if(n==1) break;
  }
  return result;
}

int main() {
  int n;
  cin >> n;
  int mod = 1e9 + 7;
  vector<long long int> divided(1001, 1);
  if (n == 1) cout << 1 << endl;
  else {
    for(int i=2;i<=n;i++) {
      vector<pair<int, int>> primes = primeFactorization(i);
      for(int j=0;j<primes.size();j++) {
        divided[primes[j].first] += primes[j].second;
      }
    }

    long long int total = divided[0];

    for(int i=1;i<divided.size();i++) {
      total = total * divided[i] % mod;
    }
    
    cout << total << endl;
  }
  
}