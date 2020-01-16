#include <bits/stdc++.h>
using namespace std;

vector<bool> primeVector() {
  vector<bool> prime(100001, true);
  prime[0] = false;
  prime[1] = false;
  for(int i=2;i<100001;i++) {
    if(prime[i]) {
      for(int j=i+i;j<100001;j+=i) prime[j] = false;
    }
  }

  return prime;
}

int main() {
  vector<int> like2017(0);
  vector<bool> prime = primeVector();
  for(int i=3;i<100001;i++) {
    if(prime[i] && prime[(i + 1) / 2]) like2017.push_back(i);
  }

  int Q;
  cin >> Q;
  for(int i=0;i<Q;i++) {
    int l, r;
    cin >> l >> r;
    int start = like2017.size();
    int end = like2017.size();
    for(int j=0;j<like2017.size();j++) {
      if(like2017[j] >= l && start == like2017.size()) start = j;
      if(r < like2017[j]) {
        end = j;
        break;
      }
    }
    cout << end - start << endl;
  }
}