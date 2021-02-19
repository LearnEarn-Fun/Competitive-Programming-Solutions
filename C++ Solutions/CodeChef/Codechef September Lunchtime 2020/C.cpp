#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n, t;
vector<ll> adj[10007];
bool visited[10007];

void dfs(ll v) {
    visited[v] = 1;
    for(ll i = 0; i < adj[v].size(); ++i) {
        if(!visited[adj[v][i]]) dfs(adj[v][i]);
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        for(ll i = 0; i < 10007; ++i) if(!adj[i].empty()) adj[i].clear();
        memset(visited, 0, sizeof(visited));

        cin >> n;

        ll a, b;
        for(ll i = 0; i < n - 1; ++i) {
            cin >> a >> b;
            adj[a].push_back(b);
        }

        ll ans = 0;
        for(ll i = 1; i <= n; ++i) {
            if(!visited[i]) {
                dfs(i);
                ans++;
            }
        }

        cout << ans - n - 1 << '\n';
    }

    return 0;
}