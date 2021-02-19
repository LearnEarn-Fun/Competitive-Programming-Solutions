#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, c[5];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        for(ll i = 0; i < n; ++i) cin >> c[i];
        ll ans = INT_MAX;
        for(ll i = 0; i < (1 << n); ++i) {
            ll a = 0, b = 0;
            for(ll j = 0; j < n; ++j) {
                if((i & (1 << j))) a += c[j];
                else b += c[j];
            }
            //cout << a << ' ' << b << '\n';
            ans = min(ans, max(a, b));
        }

        cout << ans << '\n';
    }

    return 0;
}