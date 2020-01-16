#include <bits/stdc++.h>
using namespace std;

const int MAX = 250;

vector<pair<int, int>> qu(MAX);
int tail = 0, head = 0;

void init() {
  head = tail = 0;
}

bool isEmpty() {
  return (head == tail);
}

bool isFull() {
  return (head == (tail + 1) % MAX);
}

void enqueue(pair<int, int> v) {
  if(isFull()) {
    cout << "error: queue is full." << endl;
    return;
  }
  qu[tail++] = v;
  if (tail == MAX) tail = 0;
}

pair<int, int> dequeue() {
  if(isEmpty()) {
    cout << "error: stack is empty." << endl;
    pair<int, int> res = make_pair(0, 0);
    return res;
  }
  pair<int, int> res = qu[head];
  ++head;
  if(head == MAX) head = 0;
  return res;
}


int main() {
  int r, c;
  cin >> r >> c;

  pair<int, int> start, goal;
  cin >> start.first >> start.second;
  cin >> goal.first >> goal.second;

  vector<vector<char>> field(r+1, vector<char>(c+1));
  vector<vector<int>> ans(r+1, vector<int>(c+1, INT_MAX));

  for(int i=1;i<=r;i++) {
    for(int j=1;j<=c;j++) {
      cin >> field[i][j];
    }
  }

  ans[start.first][start.second] = 0;

  init();

  enqueue(start);

  while(!isEmpty()) {
    pair<int, int> h = dequeue();
    int y = h.first;
    int x = h.second;

    if(field[y+1][x] == '.' && ans[y][x] + 1 < ans[y+1][x]) {
      ans[y+1][x] = ans[y][x] + 1;
      pair<int, int> p = make_pair(y+1, x);
      enqueue(p);
    }
    if(field[y-1][x] == '.' && ans[y][x] + 1 < ans[y-1][x]) {
      ans[y-1][x] = ans[y][x] + 1;
      pair<int, int> p = make_pair(y-1, x);
      enqueue(p);
    }
    if(field[y][x-1] == '.' && ans[y][x] + 1 < ans[y][x-1]) {
      ans[y][x-1] = ans[y][x] + 1;
      pair<int, int> p = make_pair(y, x-1);
      enqueue(p);
    }
    if(field[y][x+1] == '.' && ans[y][x] + 1 < ans[y][x+1]) {
      ans[y][x+1] = ans[y][x] + 1;
      pair<int, int> p = make_pair(y, x+1);
      enqueue(p);
    }
  }

  cout << ans[goal.first][goal.second] << endl;
}