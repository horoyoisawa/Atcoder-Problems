#include <bits/stdc++.h>
using namespace std;

int salary(int n, vector<vector<bool>> &staff) {
  vector<int> staffs(0);
  for(int i=1;i<21;i++) {
    if(staff[n][i]) staffs.push_back(i);
  }
  if(staffs.size() == 0) return 1;
  else {
    vector<int> staffsSalary(staffs.size());
    for(int i=0;i<staffs.size();i++) {
      staffsSalary[i] = salary(staffs[i], staff);
    }

    return *max_element(staffsSalary.begin(), staffsSalary.end()) + *min_element(staffsSalary.begin(), staffsSalary.end()) + 1;
  }
}

int main() {
  int n;
  cin >> n;

  vector<vector<bool>> staff(21, vector<bool>(21));

  for(int i=2;i<=n;i++) {
    int b;
    cin >> b;
    staff[b][i] = true;
  }

  cout << salary(1, staff) << endl;
}