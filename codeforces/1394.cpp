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

#define LOCAL
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

// constant number
const int N = 123;
const int MOD = 1e9 + 7;
const double eps = 1e-6;
const int64_t INF = 1e18;
const int inf = 1e9;

mt19937
    mt_rand(chrono::high_resolution_clock::now().time_since_epoch().count());

int mod[3];

struct Hash {
  int a[3];

  Hash() {
    for (int i = 0; i < 3; i++) {
      a[i] = 0;
    }
  }
  Hash(int x) {
    for (int i = 0; i < 3; i++) {
      a[i] = ((x % mod[i]) + mod[i]) % mod[i];
    }
  }
  Hash operator+(Hash rhs) {
    Hash res;
    res.a[0] = (a[0] + rhs.a[0]) % mod[0];
    res.a[1] = (1ll * a[1] * rhs.a[1]) % mod[1];
    res.a[2] = (a[2] + rhs.a[2]) % mod[2];
    return res;
  }
  bool operator==(const Hash &rhs) const {
    for (int i = 0; i < 3; i++) {
      if (a[i] != rhs.a[i])
        return false;
    }
    return true;
  }
};

void solve() {
  mod[0] = 998244353;
  mod[1] = 1e9 + 7;
  mod[2] = std::uniform_int_distribution<int>(1e8, 1e9)(mt_rand);

  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<pair<int, int>>> g(n);
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    u--;
    v--;
    g[u].emplace_back(w, v);
  }

  std::uniform_int_distribution<int> rng(1, 1e9 + 6);

  vector<Hash> val(n);
  Hash signature = Hash();
  for (int i = 0; i < n; i++) {
    val[i] = Hash(rng(mt_rand));
    signature = signature + val[i];
  }
  vector<vector<Hash>> state(k, vector<Hash>(k, Hash()));

  for (int i = 0; i < n; i++) {
    assert(g[i].size() > 0);

    sort(g[i].begin(), g[i].end());
    int deg = g[i].size() - 1;
    for (int j = 0; j < g[i].size(); j++) {
      state[deg][j] = state[deg][j] + val[g[i][j].second];
    }
  }

  int ans = 0;
  std::function<void(int, Hash)> dfs = [&](int x, Hash hsh) {
    if (x == k) {
      if (hsh == signature)
        ans++;
      return;
    }
    for (int j = 0; j < x + 1; j++) {
      dfs(x + 1, hsh + state[x][j]);
    }
  };
  dfs(0, Hash());
  cout << ans << "\n";
}
int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int t = 1;
  //  cin >> t;
  while (t--)
    solve();
}
