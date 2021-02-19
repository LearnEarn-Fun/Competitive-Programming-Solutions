#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t, n, k, h[4007], dp[4007][4007];

bool fuck(ll x) {
    ll pref = 0;
    for(ll i = 0; i <= x; ++i) {
        pref += h[i - 1];
        for(ll j = 0; j <= k; ++j) dp[i][j] = 0;
    }

    dp[0][0] = 1;
    for(ll i = 0; i < x; ++i) {
        for(ll j = 0; j <= k; ++j) {
            if(dp[i][j] && pref - (j + h[i]) >= k && j + h[i] >= k) {
                return 1;
            } 
            
            if(j + h[i] <= k) dp[i + 1][j + h[i]] += dp[i][j];
            dp[i + 1][j] += dp[i][j];
        }
    }

    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--) {
        cin >> n >> k;
        for(ll i = 0; i < n; ++i) cin >> h[i];
        sort(h, h + n, greater<ll>());

        ll l = 0, r = n + 1, ans = -1;
        while(l < r) {
            ll mid = (l + r)/2;
            if(fuck(mid)) {
                ans = mid;
                r = mid;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}