#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> Monsters(N+1);
  vector<int> Heros(N);

  long long int monsterTotal = 0;

  for(int i=0;i<N+1;i++) {
    cin >> Monsters[i];
    monsterTotal += Monsters[i];
  }

  for(int i=0;i<N;i++) {
    cin >> Heros[i];
  }

  for(int i=N-1;i>=0;i--) {
    Heros[i] = Heros[i] - Monsters[i+1];
    if(Heros[i] > 0) {
      Monsters[i+1] = 0;
      Monsters[i] = Monsters[i] - Heros[i];
      if(Monsters[i] < 0) {
        Monsters[i] = 0;
      }
    } else {
      Monsters[i+1] = Heros[i] * (-1);
    }
  }

  long long int totalAfter = 0;

  for(int i=0;i<N+1;i++) {
    totalAfter += Monsters[i];
  }

  cout << monsterTotal - totalAfter << endl;
}