// combinationを計算できればできる問題。
// combinationの計算、そして剰余を求める過程で以下のリンクを参照。
// https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a
// 二項計算処理の部分をまだ追えていないので後から(Nov 26th 2019)

#include <bits/stdc++.h>
using namespace std;

const int MAX = 666667;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
  int x;
  int y;

  cin >> x >> y;

  int a = 2 * x - y;
  int b = x - 2 * y;

  if (a < 0 || b > 0) {
    cout << 0 << endl;
  } else if (a % 3 !=0 || b % 3 != 0) {
    cout << 0 << endl;
  } else {
    int k = a / 3;
    int l = (-1) * b / 3;

    COMinit();
  
    cout << COM(k + l, k) << endl;
  }

  return 0;
}