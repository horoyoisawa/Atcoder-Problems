#include <bits/stdc++.h>
using namespace std;

bool find(int n, vector<int> a) {
  bool result = false;
  for(int i=0;i<a.size();i++) {
    if(a[i] == n) {
      result = true;
      break;
    }
  }

  return result;
}

vector<int> oneDay(vector<vector<int>> order) {
  vector<int> erased;
  erased.reserve(1000);

  for(int i=0;i<order.size();i++) {
    int size1 = order[i].size();
    if(size1 == 0) {
      continue;
    }
    int opponent = order[i][size1-1] - 1;
    if(opponent < i) {
      continue;
    }
    int size2 = order[opponent].size();
    if(size2 == 0) {
      continue;
    }
    int opponentOpponent = order[opponent][size2-1] - 1;

    if (opponentOpponent == i) {
      if (find(i, erased) || find(opponent, erased)) {
        continue;
      } else {
        erased.push_back(i);
        erased.push_back(opponent);
      }
    } else {
      continue;
    }
  }

  return erased;
}

int main() {
  int N;
  cin >> N;
  vector<vector<int> > order(N, vector<int>(N-1));

  for(int i=0;i<N;i++) {
    for(int j=0;j<N-1;j++) {
      cin >> order[i][j];
    }
  }

  int days = 0;

  int left = N * (N-1) / 2;

  while(left > 0) {
    bool can = true;
    vector<int> erased = oneDay(order);

    if(erased.size() == 0) {
      can = false;
    } else {
      for(int i=0;i<erased.size();i++) {
        order[erased[i]].pop_back();
      }
    }

    left = left - (erased.size() / 2);

    if(!can) {
      days = -1;
      break;
    } else {
      days++;
    }
  }

  cout << days << endl;

  return 0;
}
