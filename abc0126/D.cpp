#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> G(n);
  map<pair<int, int>, int> v;

  for(int i=0;i<n-1;i++) {
    int node1, node2, w;
    cin >> node1 >> node2 >> w;
    node1--;
    node2--;

    G[node1].emplace_back(node2);
    G[node2].emplace_back(node1);
    v[make_pair(node1, node2)] = (w % 2);
    v[make_pair(node2, node1)] = (w % 2);
  }

  queue<pair<int, int>> que;

  que.push(make_pair(0, 0));

  map<int, int> used;
  vector<int> ans(n);

  while(!que.empty()) {
    pair<int, int> node = que.front();que.pop();
    ans[node.first] = (node.second % 2);
    for(int i=0;i<G[node.first].size();i++) {
      if(used[G[node.first][i]]) continue;
      que.push(make_pair(G[node.first][i], node.second + v[make_pair(node.first, G[node.first][i])]));
    }

    used[node.first] = 1;
  }

  for(int i=0;i<ans.size();i++) cout << ans[i] << endl;
}