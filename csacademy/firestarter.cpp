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
template<class T>
bool set_max(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
bool set_min(T &a, const T &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<typename... Args>
void readln(Args &... args) {
    ((cin >> args), ...);
}

template<typename... Args>
void writeln(Args... args) {
    ((cout << args << " "), ...);
}

template<typename T, typename... Args>
void push_to_vec(vector<T> &v, Args &&... args) {
    (v.push_back(forward<Args>(args)), ...);
}

// Debug
string to_string(const string &s) { return '"' + s + '"'; }

string to_string(const char *s) { return to_string((string) s); }

string to_string(bool b) { return (b ? "true" : "false"); }

template<typename A, typename B>
string to_string(pair<A, B> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template<typename T>
string to_string(T v) {
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

template<typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
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

struct Edge {
    int u, v, len;

    Edge(int u, int v, int len) : u(u), v(v), len(len) {}
};

struct Fire {
    int time, dis, idx;

    Fire(int time, int dis, int idx) : time(time), dis(dis), idx(idx) {}

    bool operator<(const Fire &rhs) const {
        return dis < rhs.dis;
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    cout << fixed << setprecision(10);

    int n, m, q;
    cin >> n >> m >> q;
    vector<Edge> edges;

    // recoder edge id, find len
    map<pair<int, int>, int> mp;

    for (int i = 0; i < m; i++) {
        int u, v, len, idx;
        cin >> u >> v >> len;
        u--, v--;
        if (u > v) {
            swap(u, v);
        }
        edges.emplace_back(u, v, len);
        mp.emplace(make_pair(u, v), i);
    }

    // (time, dis) for each edge
    vector<vector<Fire>> fires(m);

    for (int i = 0; i < q; i++) {
        int t, u, v, x;
        cin >> t >> u >> v >> x;
        u--, v--;
        if (u > v) {
            swap(u, v);
            x = edges[mp[make_pair(u, v)]].len - x;
        }

        int idx = mp[make_pair(u, v)];
        fires[idx].emplace_back(t, x, n + i);
    }

    // n origin nodes, q additional node
    vector<vector<pair<int, int>>> g(n + q + 1);
    for (int i = 0; i < m; i++) {
        if (fires[i].empty()) {
            int u, v;
            u = edges[i].u;
            v = edges[i].v;
            g[u].emplace_back(edges[i].len, v);
            g[v].emplace_back(edges[i].len, u);
        } else {
            //sort by dis
            sort(fires[i].begin(), fires[i].end());

            // connect form start point n+q, fire starter
            for (const auto &fire:fires[i]) {
                g[n + q].emplace_back(fire.time, fire.idx);
            }

            // middle connect sort by dis, connect contiguously
            for (int j = 0; j + 1 < fires[i].size(); j++) {
                int u = fires[i][j].idx;
                int v = fires[i][j + 1].idx;
                int diff = fires[i][j + 1].dis - fires[i][j].dis;
                debug(u, v);
                g[u].emplace_back(diff, v);
                g[v].emplace_back(diff, u);
            }

            int u = edges[i].u;
            int v = edges[i].v;

            debug(u, v);

            // u connect to first
            g[u].emplace_back(fires[i][0].dis, fires[i][0].idx);
            g[fires[i][0].idx].emplace_back(fires[i][0].dis, u);

            // v connect to last
            int diff = edges[i].len - fires[i].back().dis;
            g[v].emplace_back(diff, fires[i].back().idx);
            g[fires[i].back().idx].emplace_back(diff, v);

        }
    }


    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
    pq.emplace(0, n + q);
    vector<ll> dis(n + q + 1, LLONG_MAX);
    dis[n + q] = 0;
    while (!pq.empty()) {
        auto pq_top = pq.top();
        pq.pop();
        ll ds = pq_top.first;
        int u = pq_top.second;
        if (dis[u] < ds) {
            continue;
        }
        for (const auto &e:g[u]) {
            int v = e.second;
            if (dis[v] > dis[u] + e.first) {
                dis[v] = dis[u] + e.first;
                pq.emplace(dis[v], v);
            }
        }
    }

    debug(dis);

    double ans = 0;
    for (int u = 0; u < n + q; u++) {
        for (const auto &e: g[u]) {
            int v = e.second;
            if (v == n + q)continue;
            ll d = e.first;
            debug(u, v, dis[u], dis[v], ans);
            double max_dis = max(dis[u], dis[v]);
            set_max(ans, max_dis);
            ll diff = d - abs(dis[u] - dis[v]);
            set_max(ans, diff * 0.5 + max_dis);
        }
    }
    cout << ans << endl;

    return 0;
}

//2 1 3
//1 2 10
//1 1 2 1
//3 1 2 1
//2 2 1 1
