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
#define MOD 998244353
#define INF 0x3f3f3f3f3f3f3f3f
#define PI 3.14159265358979323846264338
#define flout cout << fixed << setprecision(12)
ll n, q, cnt[30], a[200007], powt[200007];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(ll i = 0; i < n; ++i) {
        cin >> a[i];
        for(ll j = 0; j < 30; ++j) {
            if((a[i] & (1 << j))) cnt[j]++;
        }
    }

    powt[0] = 1;
    for(ll i = 1; i <= 200000; ++i) powt[i] = (powt[i - 1] * 2)%MOD;

    cin >> q;
    while(q--) {
        ll m;
        cin >> m;
        
        ll ans = 0;
    }
}