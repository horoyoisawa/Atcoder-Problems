#include <bits/stdc++.h>
using namespace std;

typedef pair<string, int> P;

bool myfunction (P i, P j) {
  if(i.first == j.first) {
    return (i.second > j.second);
  } else {
    return (i.first < j.first);
  }
}

int main() {
  int n;
  cin >> n;

  vector<P> vec1(n);

  for(int i=0;i<n;i++) {
    cin >> vec1[i].first;
    cin >> vec1[i].second;
  }

  vector<P> vec2 = vec1;

  sort(vec1.begin(), vec1.end(), myfunction);

  for(int i=0;i<n;i++) {
    for(int j=0;i<n;j++) {
      if(vec1[i] == vec2[j]) {
        cout << j+1 << endl;
        break;
      }
    }
  }

  return 0;
}