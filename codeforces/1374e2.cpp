// ███▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓▓▓╬╬╬╬╬╬▓█
// ███▓███████▓▓╬╬╬╬╬╬╬╬╬╬╬╬▓███▓▓▓▓█▓╬╬╬▓█
// ███████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓█
// ████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬█
// ███▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// ████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// ███▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓█
// ████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬█
// ███▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// ████▓▓▓╬╬╬╬▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// ███▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// █████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
// █████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
// █████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
// ████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
// ████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓██
// █████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓██
// █████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███
// ██████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓███
// ███████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬████
// ███████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓████
// ████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████
// █████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓██████
// ██████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓███████
// ███████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓████████
// ██████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬██████████
// ███████████████▓▓▓██▓▓╬╬╬╬╬╬▓███████████
// #pragma GCC optimization("O3")
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;

// useful template
template <class T> bool set_max(T &a, const T &b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template <class T> bool set_min(T &a, const T &b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

// Debug
string to_string(const string &s) { return '"' + s + '"'; }

string to_string(const char *s) { return to_string((string)s); }

string to_string(bool b) { return (b ? "true" : "false"); }

template <typename A, typename B> string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename T> string to_string(T v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail> void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}

//#define LOCAL
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

// constant number
const int N = 2000 * 2000 + 10;
const int MOD = 1e9 + 7;
const double eps = 1e-6;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int n, m, k;
  cin >> n >> m >> k;
  vector<pair<int, int>> g[4];
  for (int i = 0; i < n; i++) {
    int t, a, b;
    cin >> t >> a >> b;
    g[a * 2 + b].emplace_back(t, i + 1);
  }
  for (int i = 1; i < 4; i++) {
    sort(g[i].begin(), g[i].end());
  }

  while (g[3].size() > k) {
    g[0].push_back(g[3].back());
    g[3].pop_back();
  }
  sort(g[0].begin(), g[0].end());

  int sum = 0;
  int p11 = 0, p10 = 0, p01 = 0, p00 = 0;
  for (const auto &x : g[3]) {
    sum += x.first;
    p11++;
  }
  int ans = INT_MAX;
  vector<int> select(4);

  while (true) {
    bool fails = false;
    debug(p00, p01, p10, p11);
    while (p10 < g[2].size() && p10 + p11 < k) {
      sum += g[2][p10].first;
      p10++;
    }
    while (p01 < g[1].size() && p01 + p11 < k) {
      sum += g[1][p01].first;
      p01++;
    }
    if (p10 + p11 < k || p01 + p11 < k) {
      fails = true;
    }
    // maybe we will get m+1 so deselect free list
    if (p00 > 0) {
      sum -= g[0][--p00].first;
    }
    while (p00 + p01 + p10 + p11 < m) {
      debug(p00, p01, p10, p11);
      vector<int> v(3, INT_MAX);
      if (p00 < g[0].size()) {
        v[0] = g[0][p00].first;
      }
      if (p01 < g[1].size()) {
        v[1] = g[1][p01].first;
      }
      if (p10 < g[2].size()) {
        v[2] = g[2][p10].first;
      }
      int mn = min({v[0], v[1], v[2]});

      if (mn == INT_MAX) {
        fails = true;
        break;
      }
      if (v[2] == mn) {
        sum += g[2][p10].first;
        p10++;
      } else if (v[1] == mn) {
        sum += g[1][p01].first;
        p01++;
      } else if (v[0] == mn) {
        sum += g[0][p00].first;
        p00++;
      }
    }
    debug(sum, p00, p01, p10, p11);

    if (p00 + p01 + p10 + p11 == m && sum < ans && !fails) {
      ans = sum;
      select = {p00, p01, p10, p11};
    }

    if (g[3].empty()) {
      break;
    }
    p11--;
    sum -= g[3].back().first;
    g[3].pop_back();
  }
  if (ans == INT_MAX) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < select[i]; j++) {
        cout << g[i][j].second << endl;
      }
    }
  }
}
