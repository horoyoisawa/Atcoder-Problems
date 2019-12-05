#include <bits/stdc++.h>
using namespace std;

typedef pair<long long int, int> P;

long long int gcd(long long int A, long long int B) {
  if(A>B) {
    if(A % B == 0) {
      return B;
    } else {
      return gcd(A%B, B);
    }
  } else {
    if(B % A == 0) {
      return A;
    } else {
      return gcd(B%A, A);
    }
  }
}
// return all divisors of given integer
vector<long long int> divisors(long long int N) {
  vector<long long int> result(0);

  if(N == 1) {
    result.push_back(1);
  } else {
    int limit = ceil(sqrt(N));

    for(int i=1;i<limit;i++) {
      if(N % i == 0) {
        result.push_back(i);
        result.push_back(N / i);
      }
    }
  }

  return result;
}

bool pairCompare(const P& firstElof, const P& secondElof)
{
    return firstElof.second > secondElof.second;
}

int main() {
  long long int A, B;
  cin >> A >> B;

  long long int GCD = gcd(A, B);

  vector<long long int> D = divisors(GCD);

  sort(D.begin(), D.end());

  vector<long long int> result(0);

  for(int i=0;i<D.size();i++) {
    bool ok = true;
    for(int j=0;j<result.size();j++) {
      if(gcd(D[i], result[j]) == 1) {
        continue;
      } else {
        ok = false;
        break;
      }
    }
    if(ok) {
      result.push_back(D[i]);
    }
  }

  cout << result.size() << endl;
  return 0;
}