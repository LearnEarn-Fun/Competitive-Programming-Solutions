#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n;
long double adj[6][6], ve[6];

ll djikstra(ll x) {
    priority_queue<pair<long double, ll>, vector<pair<ll, ll>>, greater<pair<long double, ll>>> pq;
    pq.push(make_pair(0, x));

    long double dist[6];
    for(ll i = 0; i < 6; ++i) dist[i] = INT_MAX;

    //cout << dist[0] << endl;

    dist[x] = 0;
    while(!pq.empty()) {
        pair<long double, ll>t = pq.top();
        pq.pop();
        //cout << t.second << endl;

        if(t.first > dist[t.second]) continue;
        for(ll i = 1; i <= n; ++i) {
            if(adj[t.second][i] != -1.0 && (adj[t.second][i] >= dist[t.second] || dist[t.second] == INT_MAX)) {
                if(adj[t.second][i] < dist[i]) {
                    dist[i] = adj[t.second][i];
                    pq.push(make_pair(dist[i], i));
                }
            }
        }
    }

    ll ans = 0;
    for(ll i = 1; i <= n; ++i) if(dist[i] != INT_MAX) ans++;
    //cout << x << '\n';
    //for(ll i = 1; i <= n; ++i) cout << dist[i] << ' ';
    //cout << '\n';
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        memset(adj, -1.0, sizeof(adj[0][0]) * 6 * 6);

        cin >> n;
        for(ll i = 1; i <= n; ++i) {
            cin >> ve[i];
        }

        for(ll i = 1; i <= n; ++i) {
            for(ll j = i + 1; j <= n; ++j) {
                if(ve[j] >= ve[i]) continue;
                long double k = (j - i)/(ve[i] - ve[j]);
                adj[i][j] = adj[j][i] = k;
            }
        }

        /*for(ll i = 1; i <= n; ++i) {
            for(ll j = 1; j <= n; ++j) cout << adj[i][j] << ' ';
            cout << endl;
        }
        cout << endl;*/

        ll maxn = 0, minn = LONG_LONG_MAX;
        for(ll i = 1; i <= n; ++i) {
            ll cur = djikstra(i);
            //cout << endl;
            maxn = max(cur, maxn);
            minn = min(cur, minn);
        }

        cout << minn << ' ' << maxn << endl;
    }

    return 0;
}