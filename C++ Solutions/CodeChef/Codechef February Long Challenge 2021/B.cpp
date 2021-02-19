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
ll t, n, w[4], l[4];
vector<pair<ll, pair<ll, ll>>> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--) {
        v.clear();
        cin >> n;
        for(ll i = 0; i < n; ++i) cin >> w[i];
        for(ll i = 0; i < n; ++i) cin >> l[i];
        
        for(ll i = 0; i < n; ++i) {
            v.push_back({w[i], {i + 1, l[i]}});
        }

        sort(all(v));

        ll maxn = v[0].second.first, ans = 0;
        for(ll i = 1; i < n; ++i) {
            //cout << v[i].first << ' ' << v[i].second.first << ' ' << v[i].second.second << '\n';
            if(v[i].second.first > maxn) {
                maxn = v[i].second.first;
                continue;
            }

            ans += (maxn - v[i].second.first + v[i].second.second)/v[i].second.second;
            maxn = v[i].second.first + (maxn - v[i].second.first + v[i].second.second)/v[i].second.second * v[i].second.second;
        }

        cout << ans << '\n';
        //cout << ans << '\n';
    }

    return 0;
}