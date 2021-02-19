#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
#define benq queue
#define pbenq priority_queue
#define all(x) x.begin(), x.end()
#define sz(x) (ll)x.size()
#define m1(x) memset(x, 1, sizeof(x))
#define m0(x) memset(x, 0, sizeof(x))
#define inf(x) memset(x, 0x3f, sizeof(x))
#define MOD 1000000007
#define INF 0x3f3f3f3f3f3f3f3f
#define PI 3.14159265358979323846264338
#define flout cout << fixed << setprecision(12)
ll t, n, cnt[20007][26], h[20007], p[20], g[20007];
string v[20007];
bool used[20007];

ll poly_hash(string s) {
    ll res = 0, res1 = 0;
    for(ll i = 0; i < sz(s); ++i) {
        res = (res + ((s[i] - 'a' + 1) * p[i])%MOD)%MOD;
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    p[0] = 1;
    for(ll i = 1; i < 20; ++i) p[i] = (p[i - 1] * 131)%MOD;

    while(t--) {
        m0(used);
        cin >> n;
        for(ll i = 0; i < n; ++i) {
            for(ll j = 0; j < 26; ++j) cnt[i][j] = 0;
            cin >> v[i];
            h[i] = poly_hash(v[i].substr(1));
        }

        ll cur = 0;
        for(ll i = 0; i < n; ++i) {
            if(!used[i]) {
                g[i] = cur;
                used[i] = 1;
                cnt[cur][v[i][0] - 'a']++;
                for(ll j = 0; j < n; ++j) {
                    if(h[i] == h[j]) {
                        used[j] = 1;
                        g[j] = cur;
                        cnt[cur][v[j][0] - 'a']++;
                    }
                }

                cur++;
            }
        }

        ll ans = 0;
        for(ll i = 0; i < n; ++i) {
            for(ll j = i + 1; j < n; ++j) {
                if(!cnt[g[j]][v[i][0] - 'a'] && !cnt[g[i]][v[j][0] - 'a']) {
                    ans += 2;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}