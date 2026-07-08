// My Code Template
// https://www.luogu.com.cn/article/w6099c7g
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using llb = long double;
using pii = pair<int, int>;
using i128 = __int128;
using u128 = unsigned __int128;
template <typename T> using vc = vector<T>;
template <typename T> using vvc = vector<vc<T>>;
#define F(i, a, b) for (int i = (a); i <= (b); i++)
#define DF(i, a, b) for (int i = (a); i >= (b); i--)
#define FE(i, a, b, c) for (int i = (a); i <= (b); i += (c))
#define DFE(i, a, b, c) for (int i = (a); i >= (b); i -= (c))
#define ED(i, u, E) for (int i = E.hea[u]; i; i = E.nex[i])
#define fi first
#define se second
#define All(x) x.begin(), x.end()
#define ALL(x, l, r) x + (l), x + 1 + (r)
#define MST(x, y) memset(x, y, sizeof(x))
template <typename... T> void re(T &...a) { (cin >> ... >> a); }
template <typename T, typename... Ts> void pr(const T &a, const Ts &...b) {
  cout << a;
  (cout << ... << (cout << ' ', b));
  cout << '\n';
}
template <typename T, typename... Ts> void prs(const T &a, const Ts &...b) {
  cout << a;
  (cout << ... << (cout << ' ', b));
  cout << ' ';
}
template <typename... T> void prn(const T &...a) { (cout << ... << a); }
void pr() { cout << '\n'; }
template <typename T> T lowbit(T x) { return x & -x; }
template <typename T, typename... Ts> void ckmin(T &a, const Ts &...b) { ((a = min(a, static_cast<T>(b))), ...); }
template <typename T, typename... Ts> void ckmax(T &a, const Ts &...b) { ((a = max(a, static_cast<T>(b))), ...); }
constexpr llb PI = 3.141592653589793238462643383279502884L;
constexpr llb eps = 1e-9;
constexpr int N = 2e5 + 5;
constexpr int P = 1e9 + 7;
#define Say(x) pr((x) ? "Yes" : "No")

void Main() {}
int main() {
#ifndef ONLINE_JUDGE
  // freopen("admin.in", "r", stdin);
  // freopen("admin.out", "w", stdout);
#endif
  ios::sync_with_stdio(false), cin.tie(nullptr);
  // cout << fixed << setprecision(20);
  int T;
  re(T);
  while (T--)
    Main();
  return 0;
}