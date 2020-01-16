#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> P(n);
  vector<int> questions(3);
  for(int i=0;i<n;i++) {
    cin >> P[i];
    if(P[i] <= a) questions[0]++;
    else if(P[i] <= b) questions[1]++;
    else questions[2]++;
  }

  cout << *min_element(questions.begin(), questions.end()) << endl;

}